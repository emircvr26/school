#include <stdio.h>

int main(void){
    printf("N\tN*10\tN*100\tN*1000\n\n");

    for(int i=1;i<11;i++){
        printf("%d\t%d\t%d\t%d\n", i, i*10, i*100, i*1000);
    }
    return 0;
}