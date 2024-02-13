#include <stdio.h>
int factorial(int x)
{
	if (x==0)
		return 1;
	else
		return x * factorial(x-1);
}
int main()
{
	int a;
	printf ("Enter an integer = ");
	scanf ("%d", &a);
	printf ("Factorial of %d = %d", a, factorial(a));
}
