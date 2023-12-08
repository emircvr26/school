#include <stdio.h>
#include <math.h>

int isArmstrong(int a);

main(){
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	if(isArmstrong(num) == 1)
		printf("%d is a Armstrong number.", num);
	else
		printf("%d is not a Armstrong number.", num);
}

int isArmstrong(a){
	int sum=0, acopy= a,i, n = (int)log10(a)+1;
	
	
	for(i=0; i<n; i++){
		sum += pow(a%10,n);
		a=a/10;
	}
	
	if(acopy==sum)
		return 1;
	else
		return 0;
}
