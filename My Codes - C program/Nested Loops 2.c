#include<stdio.h>
int main()
{
	int i = 3;
	for (; i >= 0; i--){
		int j = 0;
		for (; j <= i; j++){
			printf ("* ");
		}
		printf ("\n");
	}
}
