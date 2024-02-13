#include <stdio.h>
int gcd(int a, int b)
{
	int x;
	int m;
	for(m=1; m<=a && m<=b; ++m)
	{
		if(a%m==0 && b%m==0)
		{
			x=m;
		}
	}
	return x;
}
int main()
{
	printf("GCD = %d", gcd(4,5));
}
