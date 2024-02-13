#include <stdio.h>
int main()
{
	printf("Enter two numbers = ");
	int x;
	scanf ("%d", &x);
	int y;
	scanf ("%d", &y);
	int min = (x<y)? x:y;
	int i = 1;
	int gcd = 1;
	for (;i <= min; i++)
	{
		if (x%i==0 && y%i==0)
		{
			gcd = i;
		}
	}
	printf ("GCD of %d and %d = %d", x, y, gcd);
}
