#include <stdio.h>

#define SIZE 3
void cross(double a[],double b[],double c[]);
void vector_sum(double a[],double b[],double sum[],int size);

int main(){
    double a[SIZE], b[SIZE], c[SIZE];
    int i;
    
    printf("Vector a:\n");
    for(i = 0; i<3; i++){
        scanf("%lf", &a[i]);
    }
    printf("\n");
    printf("Vector b:\n");
    for(i = 0; i<3; i++){
        scanf("%lf", &b[i]);
    }
    printf("\n");
    printf("Vector c:\n");
    for(i = 0; i<3; i++){
        scanf("%lf", &c[i]);
    }
    printf("\n");

    double aXb[SIZE], bXa[SIZE];

    printf("aXb:\n");
    cross(a,b,aXb);
    for(i = 0; i<3; i++){
        printf("%4f  ", aXb[i]);
    }
    printf("\n");

    printf("bXa:\n");
    cross(a,b,bXa);
    for(i = 0; i<3; i++){
        printf("%4f", aXb[i]);
    }
    printf("\n");
}

void cross(double a[],double b[],double c[]){
    c[0] = a[1]*b[2]-a[2]*b[1];
    c[1] = a[3]*b[1]-a[1]*b[3];
    c[2] = a[0]*b[1]-a[1]*b[0];
}