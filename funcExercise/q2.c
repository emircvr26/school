#include <stdio.h>
#include <math.h>

void displayPrime(int a, int b);
int checkPrime(int num);

main(){
	int upper,lower;
	printf("Enter lower and upper limits: ");
	scanf("%d %d", &lower, &upper);
	displayPrime(lower, upper);
}

void displayPrime(int a, int b){
	int i;
	for(i=a; i<=b; i++){
		if(checkPrime(i))
			printf("%d\t", i);
	}
}

int checkPrime(int num){
	int i;
	for(i=2; i<=num/2; i++){
		if(num%i==0)
			return 0;
	}
	return 1;
}
