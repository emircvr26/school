#include <stdio.h>
#include <math.h>


double func(double x);
main(){

    double m, a, b, tolerance;

    printf("Enter a and b\n");
    scanf("%lf%lf", &a,&b);
    printf("Enter tolerance\n");
    scanf("%lf", &tolerance);
    do{
        printf("f(a) = %lf\tf(b) = %lf\n", func(a), func(b));

        if(func(a) * func(b) < 0){
            m= (a+b)/2;
            printf("f(m) = %lf\n",func(m));
            if(func(a)*func(m)< 0)
                b=m;
            else if(func(b)*func(m)< 0)
                a=m;
        }
        printf("The interval is = [%lf,%lf]\n", func(a), func(b));
    } while(func(m) < tolerance);

}

double func(double x){
    double result = pow(x,3) - x - 2;
    return result;
}