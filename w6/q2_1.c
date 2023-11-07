#include <stdio.h>
#include <math.h>

double fact(double n);

int main(void){

    double x, n, result=0, sum=0;
    printf("Enter a number: ");
    scanf("%lf", &x);

    for(n=1;n<=7;n++){
        result = pow(-1, n+1)*pow(x,n)/fact(n);
        
        if(result > 0){
            sum += result;
        }
            
    }
    printf("%lf\n", sum);

    return 0;
}

double fact(double n){
    double fact=1;
    for(double i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}