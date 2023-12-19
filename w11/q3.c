#include <stdio.h>
#include <stdlib.h>

void generateNum(int a, int b);
int checkPerfect(int num);

main(){
	int sV, sF;
	printf("Enter sV and sF: ");
	scanf("%d %d", &sV, &sF);
	generateNum(sV, sF);
}

void generateNum(a ,b){
	int i;
	for(i= 1; i<=10; i++){
		int number = a+rand()%b;
		if(checkPerfect(number) == 1)
			printf("%d. number %d is a perfect num! \n", i, number);
		else
			printf("%d. number %d is not a perfect num! \n", i, number);
	}
}

int checkPerfect(num){
	int i, sum=0;
	for(i=1; i<=num/2; i++){
		if(num%i==0)
			sum += i;
	}
	if(sum==num)
		return 1;
	else 
		return 0;
}
