#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the limits");
    scanf("%d%d",&a,&b);
    for(int i=a;i<b;i++)
    {
        c=i%2;
        if(c==0)
        printf("%d\t",i);
    }
}
