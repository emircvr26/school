#include <stdio.h>
#include <stdlib.h>

void printArr(const int ar[][5]);
int sum(const int arr[][5]);

int main(){

    int a[5][5] = {0};
    int i,j;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            a[i][j] = 8+rand()%12;
        }
    }

    printArr(a);
    printf("Sum of main diagonal: %d\n", sum(a));

    return 0;
}

void printArr(const int ar[][5]){
    int i,j;
    printf("Elements of array:\n");
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("%2d  ", ar[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int sum(const int arr[][5]){
    int i, sum = 0;
    for(i=0;i<5; i++){
        sum += arr[i][i];
    }
    return sum;
}
