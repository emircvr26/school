#include <stdio.h>
#include <math.h>

#define SIZE 10

double mean(const int arr[]);
double SD(const int arr[], int size, double avg);

int main(){
    const int A[SIZE] = {2,6,4,8,10,12,89,68,45,37};

    double avg= mean(A);
    double standart = SD(A, SIZE, avg);

    printf("Mean of array: %lf \nStandart of array: %lf", avg, standart);

    return 0;
}

double mean(const int arr[]){
    int i;
    double sum = 0;
    for(i = 0; i<SIZE; i++){
        sum = sum + arr[i];
    }
    return sum/SIZE;
}
double SD(const int arr[], int size, double avg){
    double sum = 0;
    int i;
    for(i=0; i<SIZE; i++){
        sum += pow(arr[i]-avg, 2);
    }
    return sqrt(sum/SIZE);
}
