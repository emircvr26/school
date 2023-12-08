#include <stdio.h>
#include <math.h>

int isOdd(int b);
int isBalanced(int a);

main(){
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	if(isOdd(num)==1){
		if(isBalanced(num) == 1)
			printf("%d is a balanced number.", num);
		else
			printf("%d is not a balanced number.", num);
	}
	else
		printf("You entered even digit number!");
}

int isOdd(int b){
	if(((int)log10(b)+1)%2==0)
		return 0;
	else
		return 1;
}

int isBalanced(a){
	int acopy= a,i, n = (int)log10(a)+1;
	int sum1 = 0, sum2 = 0;
	
	for(i = 0; i<n/2; i++){
		sum1 += acopy%10;
		acopy= acopy/10;
	}
	
	a= a/(int)pow(10,n/2+1);
	
	for(i = 0; i<n/2; i++){
		sum2 += a%10;
		a= a/10;	
	}
	
	if(sum1==sum2)
		return 1;
	else
		return 0;
}
