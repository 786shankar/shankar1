#include<stdio.h>
void main()
{
    int a,b,c,d=0,e;
    printf(" enter the number");
    scanf("%d",&a);
    a=b;
    while(a!=0)
    {
    e=a%10;
    c=c*10+e;
    a/=10;
    }
    if(b==c)
    printf("palindrome");
    else
    printf("not palindrome");
    
}

