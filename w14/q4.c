#include <stdio.h>
#include <stdlib.h>

void multip(const int a[][2], const int b[][4], int c[][4]);

int main(){   
    int a[3][2] = {{1,4}, {0,1}, {-1,0}};
    int b[2][4] = {{4,1,2,1}, {0,1,-1,3}};
    int c[3][4] = {0};

    int i,j;

    printf("Elements of a:\n");
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            printf("%2d  ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Elements of b:\n");
    for(i=0; i<2; i++){
        for(j=0; j<4; j++){
            printf("%2d  ", b[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    multip(a,b,c);

    printf("Elements of c:\n");
    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            printf("%2d  ", c[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void multip(const int a[][2], const int b[][4], int c[][4]){
    int i,j;
    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            c[i][j]=a[i][0]*b[0][j]+a[i][1]*b[1][j];
        }
    }
}