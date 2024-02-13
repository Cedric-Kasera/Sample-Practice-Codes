#include<stdio.h>
int main()
{
	int rad;
	printf("Please enter radius=");
	scanf("%d" , &rad);
	double area = 3.145 * rad * rad;
	printf("area = %lf" , area);
}
