#include <stdio.h>
#include <math.h>
double sigmoid(int x)
{
	double e = e = 2.7128;
	double denom = 1 + pow(e,-x);
	double f = 1/denom;
	return f;
}
int main()
{
	int x;
	printf("Enter value of x = ");
	scanf("%d", &x);
	printf("Answer = %lf", sigmoid(x));
}
