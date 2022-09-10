#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<4;i++)
    {
        int count=0;
        for(j=0;j<(3-i);j++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            printf("%d",++count);
           
        }
    
        while(count)
        {
            printf("%d",count--);
        }
        printf("\n");
    }
}