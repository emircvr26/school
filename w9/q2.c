#include <stdio.h>
#include <math.h>

int binaryToDecimal(int n);

int main(){
	int num;
	printf("Enter a binary number to convert decimal:");
	scanf("%d", &num);
	printf("%d", binaryToDecimal(num));

	return 0;
}

int binaryToDecimal(int n){
	int i=0 , sum=0;
	sum = n%10 + (n/10)%10 * 2 + (n/100)%10 * 4 + (n/1000)%10 * 8;
	
	return sum;
}
