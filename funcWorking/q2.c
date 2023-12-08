#include <stdio.h>
#include <math.h>

int reverseNumber(int a);

main(){
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);
    printf("Reversed Number is: %d\n",reverseNumber(num));
}

int reverseNumber(a){
    
    int n=0,rev=0;
    int acopy = a;
    
    
    while(acopy>0){
    	acopy=acopy/10;
    	n = n+1;
	}

	
    while(a>0){
    	rev = rev + (a%10)*pow(10.0,n-1);
    	a = a/10;
    	--n;
	}
    return rev;
}
