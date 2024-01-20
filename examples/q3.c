#include <stdio.h>

#define SIZE 3
int det3by3(int b[][3]);

int main(){
    int a[SIZE][SIZE] = {{4,1,-2},{1,8,5},{3,4,7}};

    int i,j;
    for(i=0; i<SIZE; i++){
        for(j=0; j<SIZE; j++){
            printf("%2d  ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    int det = det3by3(a);
    printf("Det = %4d", det);
}

int det3by3(int b[][3]){
    int sum1= b[0][0]*(b[1][1]*b[2][2] - b[2][1]*b[1][2]);
    int sum2= b[0][1]*(b[1][0]*b[2][2] - b[2][0]*b[1][2]);
    int sum3= b[0][2]*(b[1][0]*b[2][1] - b[1][1]*b[2][0]);

    return sum1-sum2+sum3;
}