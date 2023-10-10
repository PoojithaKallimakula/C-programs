/*
Name:K Poojitha
Date:09-10-2023
Description:Read a number from user. Let's say if number is 5, you need to print numbers in X pattern as shown below:
If n = 5, then,
1___5
_2_4_
__3__
_2_4_
1___5
Sample input:Enter the number: 4
Sample output:
1  4
 23
 23
1  4
*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    for ( int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++) 
       {
           if ( i == j || j == (n-i+1) )
                printf("%d",j);
           else
               printf(" ");
       }
           printf("\n");
    }
   return 0;
}

