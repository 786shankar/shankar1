#include<stdio.h>
void main()
{
    int a,b,c,d=0,e,i,j;
    printf("enter the limitrs\n");
    scanf("%d%d",&a,&e);
    for(i=a;i<e;i++)
    {
        b=i;
        j=i;
        d=0;
    while(b!=0)
    {
        c=b%10;
        d=d+c*c*c;
        b=b/10;
    }
    if(j==d)
    printf("%d\n",d);
    } 
}
