#include<stdio.h>
int main()
{
	printf ("Enter two numbers:");
    int x;
    scanf ("%d" , &x);
    int y;
    scanf ("%d",&y);
    int i = 1;
    int gcd;
    while(i<x && i<y)
	{
    	if(x%i==0 && y%i==0)
		{
    		gcd = i;
    		
		}
		i++;
	}
    printf ("GCD between %d and %d = %d" , x , y , i);
}
