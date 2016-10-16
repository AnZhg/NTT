//
//  main.c
//  ntt
//
//  Created by 安志钢 on 16-10-15.
//  Copyright (c) 2016年 安志钢. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "ntt.h"

#include <limits.h>

int main(int argc, const char * argv[])
{
    // Driver program for NTT and INTT.
    int i;
    
    unsigned int *io = malloc(16 * sizeof(unsigned int));
    io[0] = 12u;
    io[1] = 34u;
    io[2] = 56u;
    io[3] = 78u;
    io[4] = 90u;
    io[5] = 22u;
    io[6] = 66u;
    io[7] = 99u;
    io[8] = 12u;
    io[9] = 34u;
    io[10] = 56u;
    io[11] = 78u;
    io[12] = 90u;
    io[13] = 22u;
    io[14] = 66u;
    io[15] = 99u;
    
    printf("Original:\n");
    for (i = 0; i < 16; ++i) {
        printf("#%02i: %i\n", i + 1, io[i]);
    }
    printf("\n");
    
    ntt(&io);
    
    printf("After NTT:\n");
    for (i = 0; i < 16; ++i) {
        printf("#%02i: %i\n", i + 1, io[i]);
    }
    printf("\n");
    
    intt(&io);
    
    printf("After INTT:\n");
    for (i = 0; i < 16; ++i) {
        printf("#%02i: %i\n", i + 1, io[i]);
    }
    printf("\n");
    
    return 0;
}

