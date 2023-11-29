#include <stdio.h>

double miletokm(double mile);

main(){
	double kmValue, mileValue;
	
	printf("Enter km value to convert mile:");
	scanf("%lf", &mileValue);
	printf("%.3f", miletokm(mileValue));
}

double miletokm(double mile){
	double km;
	km = mile * 1.61;
	return km;
}
