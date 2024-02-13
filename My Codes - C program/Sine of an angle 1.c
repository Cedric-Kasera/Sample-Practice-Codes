#include <stdio.h>
#include <math.h>
int factorial(int a)
{
	if (a == 0)
		return 1;
	else
		return a * factorial(a-1);
}
int main()
{
	#define pi 3.142
	double deg;
	printf ("Enter an angle in degrees: ");
	scanf ("%lf", &deg);
	
	double sinx = 0.0;
	int n = 0;
	for(;n < 10; n++)
	{
		int denom = 2 * n + 1;
		int fact = factorial(denom);
		double num = pow(deg,denom);
		sinx += pow(-1,n) * (num / fact);
	}
	printf ("Sin(%lf) = %lf", deg, sinx);
}
