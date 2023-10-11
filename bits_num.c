/*
Name:K Poojitha
Date:11-10-2023
Description:print the bits of a number
Sample input:Enter a number 7
Sample output:00000000 00000000 00000000 00000111
*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if (num < 0 ){
    for( int i=-31;i<=31;i++)
    {
       printf("%d",((num>>i)&1));
       if ( i%8 == 0 )
           printf(" ");

    }
    }
    else
    {

    for( int i=31;i>=0;i--)
    {
       printf("%d",((num>>i)&1));
       if ( i%8 == 0 )
           printf(" ");
    }

    }

   return 0;
}

