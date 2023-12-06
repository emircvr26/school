#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double geoMean(int a, int b);

int main(){
	int lower, upper;
	printf("Enter boundaries: ");
	scanf("%d %d", &lower, &upper);
	printf("%lf", geoMean(lower, upper));
	return 0;
}

double geoMean(a,b){
	
	int x; 
	double sum=1;
	
	for(int i=0; i<6; i++){
		x = a+rand()%(1+b-a);
		printf("%d\n", x);
		sum *= x;
	}
	return pow(sum, (1/6.0));
}
