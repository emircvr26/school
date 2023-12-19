#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void separate(int a);
int decode(int digit);

int main(){
    int num= 1000+rand()%9000;
    printf("Password is %d\n", num);
    separate(num);
    return 0;
}

void separate(int a){
    int n = (int)log10(a)+1;
    int i;
    for(i= 0; i<n; i++){
        printf("Guessed number: %d\n",decode(a%10));
        a = a/10;
    }
}

int decode(int digit){
    int guess, low=0, up=9;
    guess = rand()%10;
    while(guess != digit){
    	if(guess < digit)
    		low = guess;
    	else
    		up = guess;
    	guess= low + rand()%(up-low+1);
	}
	return guess;
}
