#include<stdio.h>

void main()
{ 
    int min,i,max,j;
    printf("enter the lower limit");
    scanf("%d",&min);
    printf("\nenter the higher value");
    scanf("%d",&max);
    min++;
    printf("the prime number between the numbers are\n");
    while(min<max)
    {   j=0;
        for(i=2;i<min;i++)
        {
            if(min%i==0)
            {
                j=1;
                break;
            }
        }
        if(j==0)
        printf("%d ",min);
        
        min++;
    }
   
}


