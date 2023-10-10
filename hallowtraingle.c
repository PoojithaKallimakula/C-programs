/*
Name:K Poojitha
Date:09-10-2323
Description:Read a number from user. Let's say if number is 5, you need to print numbers in triangle pattern as shown below:
If n = 5, then,
1 2 3 4 5
6 _ _ 7
8 _ 9
10 11
12
Sample input:Enter the number: 4
Sample output:
1 2 3 4
5     6
7 8
9
*/

#include<stdio.h>
int main()
{
   int num;
   printf("Enter the number: ");
   scanf("%d",&num);
   int count=1;
   for (int i=num;i>=1;i--)
   {
       for(int j=1;j<=i;j++)
       {
           if ( i == num || j == i || j == 1   )
           {
           printf("%d ",count);
           count++;
           }
           else
               printf(" ");
       }
      printf("\n");
   }
   return 0;
}

