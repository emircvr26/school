#include <stdio.h>
#include <math.h>

double dot(double a[],double b[],int size);
double magnitude(double a[],int size);
double angle(double dot1,double mag1,double mag2);
void mult_by_constant(double a[],double projection[], double x, int size);

int main(){
    double a[3] = {0}, b[3] = {0};
    
    // Prompt array a
    printf("Enter values of a vector:\n");
    scanf("%lf %lf %lf", &a[0], &a[1], &a[2]);
    
    // Prompt array b
    printf("Enter values of b vector:\n");
    scanf("%lf %lf %lf", &b[0], &b[1], &b[2]);
    
    printf("Values of a vector: [%.2f, %.2f, %.2f]\n", a[0], a[1], a[2]);
    printf("Values of b vector: [%.2f, %.2f, %.2f]\n\n", b[0], b[1], b[2]);

	// Dot product of a and b
	double dotProduct = dot(a,b,3);
	printf("Dot Product: %.3f\n", dotProduct);
	
	// Magnitudes of a and b array
	double maga = magnitude(a, 3);
	printf("Magnitude of a vector: %.3f\n",maga);
	double magb = magnitude(b, 3);
	printf("Magnitude of b vector: %.3f\n",magb);
	
	double ang = angle(dotProduct, maga, magb);
	printf("The angle between a and b: %.3f\n", ang);
    
    double projection[3]={0};
    mult_by_constant(a,projection, dotProduct, 3);
    printf("Projection of vector b onto vector a: [%.2f, %.2f, %.2f]\n", projection[0], projection[1], projection[2]);

    return 0;
}

double dot(double a[],double b[],int size){
	int i;
	double result = 0;
	
	for(i=0; i<size; i++)
		result += a[i]*b[i]; 
	
	return result;
}

double magnitude(double a[],int size){
	double x = 0;
	int i;
	
	for(i=0; i<size; i++){
		x += a[i]*a[i];
	}
	
	return sqrt(x);	
}

double angle(double dot1,double mag1,double mag2){
	return acos(dot1/(mag1*mag2)) * 180 / M_PI;
}

void mult_by_constant(double a[],double projection[], double x, int size){
	int i;
	for(i=0; i<size; i++){
		projection[i] = x/ dot(a,a,3) * a[i];
	}
}

