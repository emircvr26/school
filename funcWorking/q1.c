#include <stdio.h>

int isEvenDigits(int a);

main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(isEvenDigits(num)==1)
        printf("The number has even digits!");
    else
        printf("The number does not have even digits!");
}

isEvenDigits(a){
    while(a>0){
        if(a%2==0)
            return 1;
        else
            a= a/10; 
    }
    return 0;
}