#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=0;i<5;i++)
    {
        for(j=0;j<10;j++)
        {
            if(((j>=1&&j<=5-i) || (j>=5+i && j<=10)))
            {
              printf("*");
            }
            else
            {
              printf(" ");
            }
        }
        printf("\n");
    }    
}
          
    
    
