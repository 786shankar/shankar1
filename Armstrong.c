#include<stdio.h>
void main()
{
    int a,b,c,d=0;
    printf("enter the number\n");
    scanf("%d",&a);
    b=a;
    while(b!=0)
    {
        c=b%10;
        d=d+c*c*c;
        b=b/10;
    }
    if(a==d)
    printf(" yes the given number %d is a armstrong number",a);
    else
    printf(" no the given number %d is not a armstrong numner",a);
}



