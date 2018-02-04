#include<stdio.h>
void main()
{
    int min,max,i,j;
    printf("enter the lower and upper limit ");
    scanf("%d%d",&min,&max);
    min++;
    while(min<max)
    {
    j=0;
    for(i=2;i<min;i++)
    {
        if(min%i==0)
        {
            j=1; 
            break;
        }
    }
    if(j==0)
    printf("\t%d",i);
    min++;
    }
    
}
