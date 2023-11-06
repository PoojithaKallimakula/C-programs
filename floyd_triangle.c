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
    int n,count=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
            count=1;
        for(int j=1;j<=i;j++)
       {
   
           if(count==1)
           {
               printf("1");
               count=0;
           }
           else
           {
               printf("0");
               count=1;
           }
       }
        printf("\n");
    }
   return 0;
}

