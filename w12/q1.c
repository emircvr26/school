#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main(){

    int A[SIZE], B[SIZE];
    int i, result = 0;
    for(i = 0; i<SIZE; i++){
        A[i] = 1+rand()%10;
        B[i] = 1+rand()%10;
        printf("%2d. element of A: %2d \t %2d. element of B: %2d \n", i+1, A[i], i+1, B[i]);
    }

    for(i = 0; i<SIZE; i++){
        result += A[i] * B[i];
    }
    printf("\nDot product of arrays: %2d\n", result);

    return 0;
}