//
//  ntt.h
//  fft
//
//  Created by 安志钢 on 16-10-14.
//  Copyright (c) 2016年 安志钢. All rights reserved.
//
// Number theoretic transform and inverse.

#ifndef fft_ntt_h
#define fft_ntt_h

/*
 In place 16-point Number Theoretic Trabsform and Inverse Number Theoretic Trabsform.
 io: input and output. Pass by reference.
 Every element has to be 0 ~ 192 inclusive. (unsigned int)
 Larger than 192 would cause loss in information. (Due to mod 193)
 */
void ntt(unsigned int **io);
void _ntt(unsigned int **io);
void intt(unsigned int **io);
void _intt(unsigned int **io);

#endif
