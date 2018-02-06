#include<stdio.h>
void main()
{
    int a,b,i;
    printf("enter the number");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        b=a*i;
        printf("%d\t",b);
    }
}
