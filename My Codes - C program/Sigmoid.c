#include <stdio.h>
#include <math.h>
int main()
{
	double e = 2.7128;
	int x;
	printf("Enter value of x = ");
	scanf("%d", &x);
	double denom = 1 + pow(e,-x);
	double f = 1/denom;
	printf("Answer = %lf", f);
}
