/*
Name:K Poojitha
Date:
Description:
Sample input:
Sample output:
*/

#include<stdio.h>
int main()
{
    int n1,n2,sum=0;
    scanf("%d %d",&n1,&n2);
    if (n1 > 0 && n2 > 0)
    {
        for(int i=n1;i<n2;i++)
        {
            sum=0;
            for(int j=1;j<i;j++)
            {
                if(i%j==0)
                {
                    sum=sum+j;
                }
            }
            if(sum==i)
                printf("%d ",i);
        }
    }
    else
        printf("Invalid input");
   return 0;
}

