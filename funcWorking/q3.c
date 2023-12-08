#include <stdio.h>
#include <math.h>

int isHarshad(int a);

main(){
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	if(isHarshad(num) == 1)
		printf("%d is a Harshad number.", num);
	else
		printf("%d is not a Harshad number.", num);
}

int isHarshad(a){
	int sum=0, acopy= a,i, n = (int)log10(a)+1;
	
	
	for(i=0; i<n; i++){
		sum += a %10;
		a=a/10;
	}
	
	if(acopy%sum == 0)
		return 1;
	else
		return 0;
}
