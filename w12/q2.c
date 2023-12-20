#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL)); 

    int A[10]={3,5,6,9,8,2,1,1,0,7};
    int i, flag;
    for(i=0; i<10; i++){
        printf("%2d. element is %2d\n", i+1, A[i]);
    }
    int num = 1+rand()%10;
    printf("Number is %d\n", num);

    for(i=0; i<=9; ++i){
        if(num == A[i]){
            flag = 1;
            break;
        }
    }
    if(flag == 1)
        printf("The array contains the number.\n");
    else 
        printf("The array does not contain the number.\n");

    return 0;
}