#include <stdio.h>
#include <math.h>

double fact(double n);

int main(void){

    double x, n=1, result=0, sum=0;
    printf("Enter a number: ");
    scanf("%lf", &x);

    while(n<=7){
        result = pow(-1, n+1)*pow(x,n)/fact(n);
        
        if(result > 0){
            sum += result;
        }
        n++;
            
    }
    printf("%lf\n", sum);

    return 0;
}

double fact(double n){
    double fact=1, i=1;
    while(i<=n){
        fact = fact * i;
        i++;
    }
    return fact;
}