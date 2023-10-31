#include <stdio.h>
#include <math.h>

int main() {
	char operation = ' ';
	printf("Choose an operation:\n1-Sine\n2-Cosine\n3-Tangent\n4-Exponential\n5-Natural Logarithm\n6-Based-10 Logarithm\n");
	scanf("%c", &operation);

    double x;
    printf("Enter a number: \n");
    scanf("%lf", &x);

    switch (operation)
    {
    case '1':
        printf("Sine of %lf times pi is %.3f", x, sin(x));
        break;
    case '2':
        printf("Cosine of %lf times pi is %.3f", x, cos(x));
        break;
    case '3':
        printf("Tangent of %lf times pi is %.3f", x, tan(x));
        break;
    case '4':
        printf("Exponential of %lf is %.3f", x, exp(x));
        break;
    case '5':
        printf("Natural Logarithm of %lf is %.3f", x, log(x));
        break;
    case '6':
        printf("Based-10 Logarithm of %lf is %.3f", x, log10(x));
        break;
    default:
        printf("Invalid operation");
        break;
    }
}