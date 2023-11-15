#include <stdio.h>

main(){
    int num, i=1, sum=0;
    printf("Enter a num\n");
    scanf("%d", &num);
    while(i<=num){
        sum =+ i;
        if(sum == num){
            printf("X Number");
            break;
        }
        else if(sum > num){
            printf("Not X Number");
            break;
        }
        else {i++;}
    }

}