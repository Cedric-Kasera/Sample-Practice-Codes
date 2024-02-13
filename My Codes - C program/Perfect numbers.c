#include <stdio.h>
int main()
{
	int x = 1;
	for (;x <= 10000;)
	{
	int sum = 0;
	int factor = 1;
	while (factor <= x/2){
		if (x % factor == 0)
			{sum += factor;}
		factor ++;
	}
	if (x == sum)
		{printf("%d " , x);}
	x++;
	}
}
