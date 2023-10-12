/*
Name:K Poojitha
Date:12-10-2023
Description:to check whether a given number is prime or not.
Sample input:Enter a number: 2
Sample output:2 is a prime number
*/

#include<stdio.h>
int main()
{
    int num,count=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        if ( num % i == 0 )
            count++;
    }
    if( count == 2 )
        printf("%d is a prime number",num);
    else
        printf("%d is not a prime number",num);
   return 0;
}

