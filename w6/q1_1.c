#include <stdio.h>

int main(void){

    int num, i;
    int factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    for(i=1; i<=num; i++){
        factorial = factorial * i;   
    }
    printf("Factorial is %d\n", factorial);

    return 0;
}