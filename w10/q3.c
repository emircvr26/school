#include <stdio.h>
#include <stdlib.h>

void dotProduct(int a, int b);

main(){
	int lower, upper;
	printf("Enter boundaries: ");
	scanf("%d %d", &lower, &upper);
	dotProduct(lower,upper);
}

void dotProduct(a, b){
	int ax= a+rand()%(1+b-a);
	int ay= a+rand()%(1+b-a);
	int bx= a+rand()%(1+b-a);
	int by= a+rand()%(1+b-a);
	
	printf("Components of vector A: %d %d\nComponents of vector B: %d %d\n", ax,ay,bx,by);
	
	int product = ax*bx + ay*by;
	
	printf("Dot product of A and B: %d", product);
}
