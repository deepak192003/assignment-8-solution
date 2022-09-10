#include<stdio.h>
int main()
{
    int i,j;
    int count=0;
    for(i=0;i<= 3;i++)
    {

        for(j=0;j<= 6;j++)
        {
            printf("%d",++count);
        }
        
    }
}