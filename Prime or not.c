#include<stdio.h>
void main()
{
    int a,b,c=0;
    printf("enter the number");
    scanf("%d",&a);
    for(int i=2;i<=a;i++)
    {
        b=a%i;
        if(b==0)
        {
        c++; 
        }
    }
        if((c==0)||(a==1))
        printf("the given number is prime number");
        else 
        printf("the number is not prime number");
}




