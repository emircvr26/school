#include <stdio.h>
#include <math.h>

double geometricSeries(double a, double r, double n);

int main(){
	
	double a, r, n;	
	printf("Enter a, r, n: ");
	scanf("%lf%lf%lf", &a, &r, &n);
	printf("Sn = %lf", geometricSeries(a,r,n));
	
	return 0;
}

double geometricSeries(double a, double r, double n){
	return (a*(1-pow(r,n)))/(1-r);	
}

