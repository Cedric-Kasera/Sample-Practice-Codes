#include<stdio.h>
int lcm(int x, int y)
{
	int max = (x>y)? x:y;
	int lcm;
	while (max){
		if (max%x==0 && max%y==0){
			printf("LCM of %d and %d = %d", x, y, max);
			break;
		}
		max++;
	}
	return lcm;
}
int main()
{
	int a,b;
	printf("Enter two integers = ");
	scanf("%d %d", &a, &b);
	printf("LCM of %d and %d = %d", a, b, lcm(a,b));
}
