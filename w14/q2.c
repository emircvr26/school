#include <stdio.h>
#include <stdlib.h>

int det(int const a[][3]);

int main(){
    int arr[3][3]= {0};
    int i,j;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            arr[i][j] = 5-rand()%11;
        }
    }
    printf("Elements of array:\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%2d  ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("%d", det(arr));
}

int det(int const a[][3]){
    return a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1]) - a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0]) + a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]);
}
