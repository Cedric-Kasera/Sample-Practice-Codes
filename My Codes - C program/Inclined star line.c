#include <stdio.h>
int main()
{
	int i;
	for (i = 0; i < 6; i++)
	{
		int j;
		for (j = 0; j < 6; j++)
		{
			if (i == j){
				printf ("* ");
			}
			else{
				printf ("  ");
			}
		}
		printf ("\n");
	}
}
