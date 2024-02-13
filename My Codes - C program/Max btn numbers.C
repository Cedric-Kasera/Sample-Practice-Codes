#include <stdio.h>
int main()
{
    int a;
    printf ("Enter first number=" , a);
    scanf ("%d" , &a);
    int b;
    printf ("Enter second number=" , b);
    scanf ("%d" , &b);
    int max;
    if (a>b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    printf ("Max btn %d and %d = %d" , a , b , max);
}
