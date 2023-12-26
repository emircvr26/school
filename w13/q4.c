#include <stdio.h>
#include <stdlib.h>

void merge(const int a[], const int b[], int c[]);

int main(){
    int A[6]={1,4,7,9,15,18}, B[5]={2,6,10,13,19}, C[11]={0};
    merge(A,B,C);
    int i;

    printf("\nElements of A array: \n");
    for(i=0; i<6; i++){
        printf("%d  ", A[i]);
    }
    printf("\nElements of B array: \n");
    for(i=0; i<5; i++){
        printf("%d  ", B[i]);
    }
    printf("\nElements of C array: \n");
    for(i=0; i<11; i++){
        printf("%d  ", C[i]);
    }

    return 0;
}

void merge(const int a[], const int b[], int c[]){
    int i,j=0, k=0;
    for(i=0; i<11; i++){
        if(a[j] < b[k]){
            c[i] = a[j];
            j++;
        }
        else{
            c[i] = b[k];
            k++;
        }
    }
}