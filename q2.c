#include <stdio.h>
#include <math.h>

int main() {
	char operation = ' ';
	printf("Choose an operation:\n1-Sine\n2-Cosine\n3-Tangent\n4-Exponential\n5-Natural Logarithm\n6-Based-10 Logarithm\n");
	scanf("%c", &operation);

    double x;
    printf("Enter a number: \n");
    scanf("%lf", &x);

    if(operation=='1')
        printf("Sine of %lf times pi is %.3f", x, sin(x));
    else if (operation=='2')
        printf("Cosine of %lf times pi is %.3f", x, cos(x));
    else if (operation=='3')
        printf("Tangent of %lf times pi is %.3f", x, tan(x));
    else if (operation=='4')
        printf("Exponential of %lf is %.3f", x, exp(x));
    else if (operation=='5')
        printf("Natural Logarithm of %lf is %.3f", x, log(x));
    else if (operation=='6')
        printf("Based-10 Logarithm of %lf is %.3f", x, log10(x));
    else
        printf("Invalid operation");
    return 0;
}
