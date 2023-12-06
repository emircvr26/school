#include <stdio.h>
#include <stdlib.h>

int triangular(int a, int b);

main()
{
	int lower, upper;
	printf("Enter boundaries: ");
	scanf("%d %d", &lower, &upper);
	printf("%d", triangular(lower,upper));
}

int triangular(a,b){
	int s1, s2, s3;
	s1 = a+rand()%(b-a+1);
	s2 = a+rand()%(b-a+1);
	s3 = a+rand()%(b-a+1);
	
	printf("%d %d %d\n", s1,s2,s3);
	
	if(s1+s2 > s3 && s1+s3 > s2 && s2+s3 > s1)
		return 1;
	else
		return 0;
}
