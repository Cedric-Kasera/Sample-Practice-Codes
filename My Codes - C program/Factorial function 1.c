#include <stdio.h>
int factorial(int x)
{
	int fact = 1;
	while (x > 1){
		fact *= x;
		x--;
	}
	return fact;
}
int main()
{
	int m;
	printf ("Enter value = ");
	scanf ("%d", &m);
	printf ("Factorial of %d = %d", m, factorial(m));
}
