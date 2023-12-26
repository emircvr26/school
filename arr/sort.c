#include <stdio.h>

#define SIZE 10
void sort(int A[]);
void printArr(int A[]);

int main(){
    int arr[SIZE]={9,3,4,10,1,8,0,6,5,0};
    printf("Original order of array\n");
    printArr(arr);

    sort(arr);

    printf("\nOriginal order of array\n");
    printArr(arr);
    return 0;
}

void printArr(int A[]){
    int i;
    for(i= 0; i<SIZE; i++){
        printf("%2d  ", A[i]);
    }
}

void sort(int A[]){
    int i, j, hold;
    for(i=0; i<SIZE-1; i++){
        for(j=0; j<SIZE-1; j++){
            if(A[j] > A[j+1]){
                hold = A[j];
                A[j] = A[j+1];
                A[j+1] = hold;
            }
        }
    }
}