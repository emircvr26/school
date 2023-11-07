#include <stdio.h>

int main(void){
    int i = 1;
    printf("N\tN*10\tN*100\tN*1000\n\n");

    while(i<11){
        printf("%d\t%d\t%d\t%d\n", i, i*10, i*100, i*1000);
        i++;
    }
    return 0;
}