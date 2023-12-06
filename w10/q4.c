#include <stdio.h>
#include <stdlib.h>

void midPoint();

main(){
	midPoint();
}

void midPoint(){
	int sV, sF;
	printf("Enter shift value and scaling factor: ");
	scanf("%d %d", &sV, &sF);
	
	int a1, a2, b1, b2;
	double m1,m2;
	
	a1=sV+rand()%sF;
	a2=sV+rand()%sF;
	b1=sV+rand()%sF;
	b2=sV+rand()%sF;
	
	printf("a1= %d\na2= %d\nb1= %d\nb2= %d\n", a1,a2,b1,b2);
	
	m1= (double)(a1+b1)/2;
	m2= (double)(a2+b2)/2;
	
	printf("m1 = %.3f\nm2 = %.3f", m1,m2);
}
