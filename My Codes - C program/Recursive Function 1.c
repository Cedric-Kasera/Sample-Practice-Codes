#include <stdio.h>
int factorial(int x)
{
	if (x == 0 || x==1)
		return 1;
	else
		return x * factorial(x-1);
}
int main()
{
	int a;
	printf ("Enter value = ");
	scanf ("%d", &a);
	printf ("Factorial of %d = %d", a, factorial(a));
}
