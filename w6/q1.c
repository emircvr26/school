#include <stdio.h>

int main(void){

    int num, i;
    int factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    for(i=1; i<=num; i++){
        factorial = factorial * i;   
    }
    printf("For Loop:   Factorial is %d\n", factorial);


    int factorial2 = 1;
    while(i<=num){
        factorial2 = factorial2 * i;
        i++;
    }
    printf("While Loop: Factorial is %d\n", factorial);

    return 0;
}