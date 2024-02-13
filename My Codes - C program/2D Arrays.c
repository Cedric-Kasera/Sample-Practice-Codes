#include <stdio.h>
int main()
{
	int marks[3][4];
	int rows;
	int cols;
	for(rows = 0; rows < 3; rows++)
	{
		printf("Student %d: ", rows+1);
		int sum = 0;
		for(cols = 0; cols < 4; cols++)
		{
			scanf("%d",&marks[rows][cols]);
			printf("%d ",marks[rows][cols]);
			sum += marks[rows][cols];
		}
		double average = sum/(double)cols;
		printf("Sum = %d\t", sum);
		printf("Average = %lf", average);
		printf("\n\n");
	}
}
