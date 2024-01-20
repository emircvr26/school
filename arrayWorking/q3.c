#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int checkAr(const int ar[], int num);

int main(){
    srand(time(NULL));

    int a[10] = {0};
    int i;

    printf("Elements of array:\n");
    for(i = 0; i<10; i++){
        a[i] = rand()%10;
        printf("%d ", a[i]);
    }
    printf("\n");

    int num;
    do{
        printf("Enter a number between 0-19:\n");
        scanf("%d", &num);
    }while(!(0<=num && num<=19));
   
    if(checkAr(a, num))
        printf("The array contains the number.\n");
    else
        printf("The array does not contain the number.\n");
}

int checkAr(const int ar[], int num){
    int i=0;
    for(; i<10; i++){
        if(ar[i] == num)
            return 1;
    }
    return 0;
}