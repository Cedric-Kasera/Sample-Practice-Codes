#include <stdio.h>
#include <math.h>
int main ()
{
	int index = 6;
	int date = 1 - index;
	printf ("Mo\tTu\tWe\tTh\tFr\tSa\tSu\t\n");
	int w;	
	for ( w = 0; w < 6; w++)
	{
		int d;
		for(d = 0; d < 7; d++)
		{
			if (date <= 0)
				printf(" \t" );
			else if (date > 31)
					break;
			else
				printf("%d\t" , date);
			date++;
		}
		printf("\n");
	}
}
