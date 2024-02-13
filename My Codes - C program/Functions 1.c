#include<stdio.h>
int summation(int x, int y)
{
    int sum = 0;
    int i;
    for(i=x,i<y;i++){
        sum += i;
    }
    return sum;
}
int main()
{
    printf("Sum = %d", summation(0,6));
}
