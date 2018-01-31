#include<stdio.h>
void main()
{
    int a,b,c=1;
    printf("enter the values for a and b\n");
    scanf("%d%d",&a,&b);
    for(int i=1;i<=b;i++)
    {
        c=c*a;
    }
    printf("the power of the given number is %d",c);
}






