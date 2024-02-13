#include<stdio.h>
int main()
{
	int i;
	for(i = 1; i <= 10; i++)
	{
		if(i<8 && i != 2 || i%4 != 0 ){
			printf("%d", i--);
			break;
		}
	}
}
