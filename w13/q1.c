#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int minimum(const int a[]);

int main(){
    int a[SIZE]={0};
    int i;

    for(i=0; i<SIZE; i++){
        a[i] = rand()%10;
    }
    
    printf("Elements of array: \n");
    for(i=0; i<SIZE; i++)
        printf("%d  ", a[i]);
    
    int min= minimum(a);

    printf("\n Minimum element of array: %d\n", min);

    return 0;
}

int minimum(const int x[]){
    int i, min = x[0];
    for(i=1; i<SIZE; i++){
            if(x[i]<min)
                min = x[i];
        }
    return min;
}
