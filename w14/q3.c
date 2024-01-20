#include <stdio.h>
#include <stdlib.h>

void initArray(int arr[][6]);
void printArr(const int arr[][6]);
void transpose(int x[][6], int xT[][6]);

int main(){
    int x[6][6];
    int xT[6][6] = {0};

    initArray(x);
    printArr(x);
    transpose(x,xT);
    printArr(xT);
}

void initArray(int arr[][6]){
    int i,j;
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            arr[i][j] = 41+ rand()%27;
        }
    }
}

void printArr(const int arr[][6]){
    int i,j;
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void transpose(int x[][6], int xT[][6]){
    int i,j;
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            xT[i][j] = x[j][i];
        }
    }
}