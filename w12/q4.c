#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, A[10]={0};
    
    for(i = 0; i<10; i++){
        A[i]= rand()%10;
        printf("%d element of A is %d\n", i, A[i]);
    }
    int count = 0, num;

    printf("Enter a number");
    scanf("%d", &num);

    for(i=0; i<10; i++){
        if(A[i]<num)
            count++;
    }

    printf("%d element of A is less tan %d", count, num);

    return 0;
}