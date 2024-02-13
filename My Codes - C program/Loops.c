#include <stdio.h>
int main()
{
	int i;
	for (i=6; i>=0; i--)
	{
		int j;
		for (j=0; j<i; j++)
		{
			printf ("* ");
		}
		printf("\n");
	}
}
