#include <stdio.h>

void iniImage(int x[][10]);
void printArray(const int x[][10]);
void printClusterIndices(const int x[][10], const int code);

int main(){
    int I[10][10];
    iniImage(I);
    printArray(I);
    
    int i;
    for(i=0;i<6;i++)
        printClusterIndices(I, i+1);
}

void iniImage(int x[][10]){
    int i, j;
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            if(i<6 && j<5)
                x[i][j] = 1;
            if(i>5 && j<7)
                x[i][j] = 2;
            if(i<6 && j>4 && j<8)
                x[i][j] = 3;
            if(i<6 && j==8)
                x[i][j] = 4;
            if(i>5 && j<9 && j>6)
                x[i][j] = 5;
            if(j==9)
                x[i][j] = 6;
        }
    }
}

void printArray(const int x[][10]){
    int i,j;
    printf("I\n");
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            printf("%d ", x[j][i]);
        }
        printf("\n");
    }
    printf("\n");
}

void printClusterIndices(const int x[][10], const int code){
    int i,j;
    switch (code)
    {
    case 1:
        printf("Pixel indices for red color\n");
        for(j=0; j<10; j++){
            for(i=0; i<10; i++){
                if(x[i][j]==code)
                    printf("%d ", j*10+i+1);
            }
        }
        printf("\n");
        break;
    case 2:
        printf("Pixel indices for blue color\n");
        for(j=0; j<10; j++){
            for(i=0; i<10; i++){
                if(x[i][j]==code)
                    printf("%d ", j*10+i+1);
            }
        }
        printf("\n");
        break;
    case 3:
        printf("Pixel indices for yellow color\n");
        for(j=0; j<10; j++){
            for(i=0; i<10; i++){
                if(x[i][j]==code)
                    printf("%d ", j*10+i+1);
            }
        }
        printf("\n");
        break;
    case 4:
        printf("Pixel indices for cyan color\n");
        for(j=0; j<10; j++){
            for(i=0; i<10; i++){
                if(x[i][j]==code)
                    printf("%d ", j*10+i+1);
            }
        }
        printf("\n");
        break;
    case 5:
        printf("Pixel indices for magenta color\n");
        for(j=0; j<10; j++){
            for(i=0; i<10; i++){
                if(x[i][j]==code)
                    printf("%d ", j*10+i+1);
            }
        }
        printf("\n");
        break;
    case 6:
        printf("Pixel indices for green color\n");
        for(j=0; j<10; j++){
            for(i=0; i<10; i++){
                if(x[i][j]==code)
                    printf("%d ", j*10+i+1);
            }
        }
        printf("\n");
        break;
    }
}