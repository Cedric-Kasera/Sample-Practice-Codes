#include <stdio.h>
int main ()
{
	int h;
	printf("Enter the hours = ");
	scanf("%d", &h);
	int m;
	printf("Enter the minutes = ");
	scanf("%d", &m);
	int s;
	printf("Enter the seconds = ");
	scanf("%d", &s);
	for(; h<24; )
	{
		for(; m<60; )
		{
			for(; s<60; s++)
			{
				if(s == 60){
					m += 1;
					break;
				}
			}
			if(m == 60){
				h += 1;
				break;
			}
		}
		if(h == 24){
			h = 0;
			break;	
		}	
	}
	printf("Time  = %d hours: %d minutes: %d seconds", h, m, s+1);
}
