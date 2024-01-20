#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
int calc(const int A[]);

int main(){
    srand(time(NULL));

    int a[SIZE]={0};
    int i;
    for(i = 0; i<SIZE; i++){
        a[i] = rand()%10;
        printf("%d ", a[i]);
    }
    printf("\n");

    int sum = calc(a);
    printf("The result of equation: %d", sum);
}

int calc(const int A[]){
    int sum = 0, i = 0;
    for(; i<SIZE; i++){
        sum -= i * A[i];
    }
    return sum;
}