#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, A[10]={0};
    
    for(i = 0; i<10; i++){
        A[i]= rand()%10;
        printf("%d element of A is %d\n", i, A[i]);
    }

    int sum = 0, num = 10+rand()%10;
    printf("Number is %d\n", num);

    for(i=0; i<10; i++){
        sum += A[i];
    }
    printf("Sum is %d\n", sum);

    if(sum < num)
        printf("WIN\n");
    else
        printf("LOST\n");

    return 0;
}