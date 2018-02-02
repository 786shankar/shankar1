#include<stdio.h>
void main()
{
    int fact=1,i,a;
    printf("enter the number to find factorial");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    printf("the factorial of given number is %d",fact);
}
