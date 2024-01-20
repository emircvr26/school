#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
int sumArray(const int a[]);
void winlose(int sum, int guess);

int main(){
    srand(time(NULL));

    int A[SIZE]={0};
    int i;
    for(i = 0; i<SIZE; i++){
        A[i] = rand()%10;
        printf("%d ", A[i]);
    }
    printf("\n");

    int num = 9+rand()%11;
    printf("Selected number is %d\n", num);

    int sum = sumArray(A);
    winlose(sum,num);
}

int sumArray(const int a[]){
    int sum= 0, i;
    for(i=0; i<SIZE; i++){
        sum += a[i];
    }
    return sum;
}

void winlose(int sum, int guess){
    if(guess<sum)
        printf("WIN\nSum: %2d ", sum);
    else
        printf("LOSE\nSum: %2d ", sum);
}
