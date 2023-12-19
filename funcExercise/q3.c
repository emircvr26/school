#include <stdio.h>

int checkSum(int num);
int decode(int digit);

main(){
	int id;
	printf("Enter your card id: ");
	scanf("%d", &id);
	if(checkSum(id))
		printf("It is a valid card number");
	else 
		printf("It is not a valid card number");
	
}

int checkSum(int num){
	int sum=0;
	while(num!=0){
		sum = sum + decode(num%10);
		num = num/10;
	}
	if(sum == 222)
		return 1;
	else
		return 0;
}

int decode(int digit){
	if(digit%2 == 0)
		return digit*digit;
	else
		return 2*digit;
}
