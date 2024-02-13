#include<stdio.h>
int main()
{
	int x = 72;
	int y = 120;
	int max;
	max = (x>y)? x:y;
	printf("Max = %d\n", max);
	int lcm;
	for(;max; max++){
		if (max%x==0 && max%y==0){
			printf("LCM of %d and %d = %d", x, y, max);
			break;
		}
	}
}
