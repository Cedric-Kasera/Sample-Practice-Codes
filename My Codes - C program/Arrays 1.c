#include <stdio.h>
int main ()
{
	 int mark[6]={20,30,40,50,60,70};
	 int i = 0;
	 int n = 6;
	 int sum = 0;
	 int av;
	 for (; i<n; i++)
	 {
	 	sum +=mark[i];
	 }
	 av = sum/n;
	 printf("Average of the array = %d", av);
}
