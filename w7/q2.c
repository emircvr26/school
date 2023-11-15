#include <stdio.h>

int main(){
    
    int fact = 1, n= 1;

    while(fact<= 10000){
        n++;
        fact = fact * n;
        
    }

    printf("First number exceed 10000 is %d",n);
    
    return 0;
}
