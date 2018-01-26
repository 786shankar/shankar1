#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>c&&a>b)
    printf("%d is greater number",a);
    if(b>c&&b>a)
    printf("%d is greater number",b);
    else
    printf("%d is greater number",c);
}
