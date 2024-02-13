#include <stdio.h>
int main()
{
	int marks[2][5] = {{1, 2, 543, 344, 57},{160, 101, 172, 163, 142}};
	int rows;
	for(rows = 0; rows < 2; rows++) 
	{
		int cols;
		for (cols = 0; cols < 5; cols++) 
		{
			printf ("%d\t", marks[rows][cols]);
		}
		printf ("\n");
	}
}
