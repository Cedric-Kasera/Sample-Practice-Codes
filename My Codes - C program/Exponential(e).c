#include <stdio.h>
int main()
{
	double e = 2;
	int n;
	int f = 1;
	for (n = 2;n <= 10; n++){
		f *= n;
		e += 1.0/f;
	}
	printf("e = %lf" , e);
}
