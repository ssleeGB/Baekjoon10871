//
//  main.c
//  baekjoon10871
//
//  Created by 이승섭 on 2019. 1. 8..
//  Copyright © 2019년 이승섭. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("input.txt","r");
    
    int N, X;
    int A[100001];
    
    fscanf(fp, "%d %d", &N, &X);
    printf("%d %d \n", N, X);
    
    for(int i = 0; i < N; i++)
    {
        fscanf(fp, "%d", &A[i]);
        printf("%d ", A[i]);
    }
    printf("\n");
    
    for(int j = 0; j < N; j++)
    {
        if(A[j] < X)
            printf("%d ", A[j]);
    }
    printf("\n");
    
    fclose(fp);
    
    return 0;
}
