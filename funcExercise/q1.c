#include <stdio.h>
#include <math.h>

int fact(int a);
void calculate (double x,int N);

int main(){
	
	int numOfTerm;
	double degree;
	printf("Enter degree and N.\n");
	scanf("%lf %d", &degree, &numOfTerm);
	
	calculate(degree, numOfTerm);
	
}

int fact(a){
	if(a == 1)
		return 1;
	else
		return a * fact(a-1);
}

void calculate(double x, int N){
	int i, sign=-1, j=3;
	double app_sin = x*M_PI/180;
	printf("Iteration: 1\tsin(x): %lf \tapp_sin(x): %lf\n", sin(x*M_PI/180), app_sin);
	
	for(i=2;i<=N; i++){
		app_sin = app_sin+(sign*pow(x*M_PI/180,j)/fact(j));
		printf("Iteration: %d\tsin(x): %lf \tapp_sin(x): %lf\n", i, sin(x*M_PI/180), app_sin);
		j += 2;
		sign *= -1;
	}
}
