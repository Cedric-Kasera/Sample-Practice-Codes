#include <stdio.h>
int gcd(int x, int y)
{
	int i = 1;
	int gcd = 1;
	for (;i <= x; i++)
	{
		if (x%i==0 && y%i==0)
		{
			gcd = i;
		}
	}
	return gcd;
}
int main ()
{
	printf("Enter two numbers = ");
	int m;
	scanf ("%d", &m);
	int n;
	scanf ("%d", &n);
	printf ("GCD of %d and %d = %d", m, n, gcd(m,n));
}
