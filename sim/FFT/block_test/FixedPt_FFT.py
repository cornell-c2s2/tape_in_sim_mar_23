
"""
Floating Point FFT on arbitrary signal.
By. Steven Sun '25 and Will Salcedo '23
"""
import math
import os
import cmath
import numpy as np
from fxpmath import Fxp

    
def cooley_tukey_fft_recursive(x, NUM_SAMPLES):
    X = list()
    for k in range(0, NUM_SAMPLES):
        window = 1 # np.sin(np.pi * (k+0.5)/N)**2
        X.append(complex(x[k] * window, 0))
    fft_rec(X)
    return X

def fft_rec(X):
    N = len(X)
    if N <= 1:
        return
    even = np.array(X[0:N:2])
    odd = np.array(X[1:N:2])
    fft_rec(even)
    fft_rec(odd)
    for k in range(0, N//2):
        t = np.exp(complex(0, -2 * np.pi * k / N)) * odd[k]
        X[k] = even[k] + t
        X[N//2 + k] = even[k] - t


def fixed_point_fft(BIT_WIDTH, DECIMAL_PT, SIZE_FFT, x):
    X_r = list(x)
    X_i = np.zeros(SIZE_FFT)
    
    j = round(SIZE_FFT // 2)


    for i in range(1, SIZE_FFT - 1):
        if i >= j:

            X_r[round(i)], X_r[round(j)] = X_r[round(j)], X_r[round(i)]
        
        k = SIZE_FFT/2

        while(1):
            if k > j:
                break
            j -= k
            k /= 2
        j += k

    #print(X_r)
    #print(X_i)

    sine_table = np.zeros(SIZE_FFT)

    for i in range(SIZE_FFT):
        X_i[i] = 0
        sine_table[i] = math.trunc(math.sin((2 * math.pi * i / SIZE_FFT)) * (2**DECIMAL_PT))

    for stage in range(round(math.log2(SIZE_FFT))):
        
        X_r, X_i = fixed_point_fft_stage(BIT_WIDTH, DECIMAL_PT, SIZE_FFT, stage, sine_table, X_r, X_i)

        
        
    print(X_r)
    return X_r
    #return X

def fixed_point_fft_stage( BIT_WIDTH, DECIMAL_PT, SIZE_FFT, STAGE_FFT, sine_table, X_r, X_i):

    

    for m in range( 2 ** STAGE_FFT ):
        for i in range( m, SIZE_FFT, 2 ** (STAGE_FFT + 1)):
            #print("m: " + str(m))
            if( m != 0 ):    
                w_r = sine_table[round((m * SIZE_FFT / (2 * (2 ** STAGE_FFT))) % SIZE_FFT + SIZE_FFT/4)]
                w_im = -sine_table[round((m * SIZE_FFT / (2 * (2 ** STAGE_FFT))) % SIZE_FFT)]
            if( m == 0 ):
                w_r = 1 * (2**DECIMAL_PT)
                w_im = 0
            #print(r)
            #print(im)


            X_r[round(i)], X_r[round(i + 2 ** STAGE_FFT)], X_i[round(i)], X_i[round(i + 2 ** STAGE_FFT)] = bfu( X_r[round(i)], X_r[round(i + 2 ** STAGE_FFT)], X_i[round(i)], X_i[round(i + 2 ** STAGE_FFT)], w_r, w_im, BIT_WIDTH, DECIMAL_PT)
    return X_r, X_i

def bfu(a_r, b_r, a_i, b_i, w_r, w_im, BIT_WIDTH, DECIMAL_PT):

    """
    print("w_r: " + str(w_r))
    print("w_i: " + str(w_im))

    print("a_r: " + str(a_r))
    print("a_i: " + str(a_i))
    """

    t_r = ((w_r * b_r) // (2**DECIMAL_PT)) - ((w_im * b_i) // (2**DECIMAL_PT))
    t_i = ((w_r + w_im) * (b_r + b_i) // (2**DECIMAL_PT)) - (w_r * b_r) // (2**DECIMAL_PT) - (w_im * b_i) / (2**DECIMAL_PT)
    
    c_r = a_r + t_r
    c_i = a_i + t_i 

    d_r = a_r - t_r
    d_i = a_i - t_i


    return c_r, d_r, c_i, d_i

"""
def fxpnumber(n, BIT_WIDTH, DECIMAL_PT):
    return Fxp(n, signed = True, n_word = BIT_WIDTH, n_frac = DECIMAL_PT)
"""
#print(fixed_point_fft(32,16,2,[1,1]))
