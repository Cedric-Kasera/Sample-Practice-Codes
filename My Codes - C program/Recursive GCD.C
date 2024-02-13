#include <stdio.h>
int gcd(int x, int y)
{
	if (y == 0)
		return x;
	else
		return gcd(y, x%y);
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
