#include<stdio.h>
#include<math.h>
int main()
{
	double deg;
	printf ("Enter an angle:");
	scanf ("%lf", &deg);
	int n = 0;
	double sinx = 0.0;
	while (n < 10){
		int factor = 2 * n + 1;
		int factorial = 1;
		int power = factor;
		while (factor > 1){
			factorial *= factor;
			factor--;
		}
	sinx += pow (-1,n) * pow (deg,power)/ factorial;
	n++;
	}
	printf ("Sin (%lf) = %lf", deg, sinx);
}
