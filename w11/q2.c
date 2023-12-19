#include <stdio.h>
#include <math.h>

double findRoot(double x0, int n);
double foo(double x);
double derivative_foo(double x);

main(){
	double x0;
	int n;
	
	printf("Enter x0 and number of iteration: ");
	scanf("%lf %d", &x0, &n);
	
	printf("f(x)= %lf at final iter.", foo(findRoot(x0,n)));
}

double findRoot(double x0, int n){
	int i;
	double xn, xn1;
	xn= x0;
	for(i=0; i< n; i++){
		xn1 = xn - foo(xn)/derivative_foo(xn);
		printf("x = %lf\tf(x)= %lf at iter: %d\n", xn, foo(xn),i);
		xn= xn1;
	}
	printf("x = %lf\t", xn);
	return xn;
}

double foo(double x){
	return 3*x*x - cos(x);
}

double derivative_foo(double x){
	return 6*x + sin(x);
}
