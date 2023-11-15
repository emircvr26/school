#include <stdio.h>
#include <math.h>

main(){

    int num, numCopy, res;
    printf("Enter a binary number to convert a decimal \n");
    scanf("%d", &num);

    numCopy = num;

    for(int i=0; numCopy>0; i++ ){
        res = res + (numCopy %10) * pow(2.0, i);
        numCopy = numCopy/ 10;
    }

    printf("%d", res);
}