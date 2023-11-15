#include <stdio.h>
#include <math.h>

main(){

    int num, sum= 0, i=0;

    do{
        printf("Enter a number\n");
        scanf("%d", &num);
        sum = sum + num*num;
        i++;

    } while(num != -1);
    i--;
    sum++;

    double result = sqrt(((double) sum) / i);
    printf("%.3f", result);
}