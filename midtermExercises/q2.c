#include <stdio.h>
#include <math.h>


double func(double x);
int main(){

    double m, a, b, tolerance;

    printf("Enter a and b\n");
    scanf("%lf%lf", &a,&b);
    printf("Enter tolerance\n");
    scanf("%lf", &tolerance);
    do{
        printf("f(a) = %lf\tf(b) = %lf\n", func(a), func(b));
        m= (a+b)/2;

        if(func(a) * func(b) < 0){
            printf("f(m) = %lf\n",func(m));
            if(func(a)*func(m)< 0)
                b=m;
            else if(func(b)*func(m)< 0)
                a=m;
        }
        printf("The interval is = [%lf,%lf]\n", a, b);
    } while(fabs(func(m)) > tolerance);
    return 0;
}

double func(double x){
    double result = pow(x,3) - x - 2;
    return result;
}