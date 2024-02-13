#include<stdio.h>
int main()
{
	int i = 0;
	for (;i < 4;i++){
		int j = 0;
		for (;j < 4;j++){
			if (i == j)
				printf ("* ");
			else
				printf ("  ");
		}
		printf ("\n");
	}
}
