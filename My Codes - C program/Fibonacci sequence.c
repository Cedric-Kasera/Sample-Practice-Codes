#include<stdio.h>
int main()
{	 
	int f0 = 0;
	int f1 = 1;
	printf ("%d %d ",f0,f1);
	int i;
	for (i = 0; i < 10; i++){
		int fn = f0 + f1;
		printf ("%d ", fn);
		f0 = f1;
		f1 = fn;
	}
}
