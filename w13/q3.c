#include <stdio.h>
#include <stdlib.h>

void separate(const int x[], int e[], int o[]);

int main(){
    int numbers[20]= {0};
    int odd[20] = {0};
    int even[20] = {0};
    int i;
    printf("Elements of array: \n");

    for(i=0; i<20; i++){
        numbers[i]= 11+rand()%38;
        printf("%2d ", numbers[i]);
    }

    separate(numbers, even, odd);

    printf("\nOdd elements of array: \n");
    for(i=0; i<20; i++){
        if(odd[i]!=0)
            printf("%2d ", odd[i]);
    }
    printf("\nEven elements of array: \n");
    for(i=0; i<20; i++){
        if(even[i]!=0)
            printf("%2d ", even[i]);
    }

    return 0;
}

void separate(const int x[], int e[], int o[]){
    int i;
    for(i=0; i<20; i++){
        if(x[i]%2 == 0)
            e[i] = x[i];
        else   
            o[i] = x[i];
    }
}