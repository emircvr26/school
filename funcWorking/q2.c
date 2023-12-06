#include <stdio.h>
#include <math.h>

void reverseNumber(int a);

main(){
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);
    reverseNumber(num);
}

void reverseNumber(a){
    
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
    printf("%d", rev);
}
