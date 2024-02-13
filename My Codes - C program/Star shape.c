#include <stdio.h>
int main()
{
	int i = 0;
	for(; i<6;i++)
	{
		int j = 0;
		for(; j <= i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
