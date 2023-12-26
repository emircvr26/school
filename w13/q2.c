#include <stdio.h>
#include <stdlib.h>

#define SIZE 20
int count(const int a[]);

int main(){
    int a[SIZE]={0};
    int i;

    printf("Elements of array: \n");
    for(i=0; i<SIZE; i++){
        a[i] = rand()%18-8;
        printf("%d  ", a[i]);
    }
    
    int neg= count(a);

    printf("\nCount of the negative numbers are: %d", neg);

    return 0;
}
int count(const int a[]){
    int i,count=0;
    for(i=0; i<SIZE; i++){
        if(a[i]<0) 
            count++;
    }
    return count;
}