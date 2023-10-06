/*
Name:K Poojitha
Date:05-10-2023
Description: In mathematics, the Fibonacci numbers or Fibonacci sequence are the numbers in the following integer sequence 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144 . . . OR 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144 . . .
• By definition, the first two numbers in the Fibonacci sequence are 0 and 1, each subsequent number is the sum of the previous two
Sample input:Enter a number: 8
Sample output:0 1 1 2 3 5 8
*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num < 0 )
        printf("Invalid input");
    else if 
    else
    {
        int a=0,b=1,sum=0;
        printf("%d %d",a,b);
        for (int i=3;i<num;i++)
        {
            sum=a+b;
            a=b;
            b=sum;
            printf(" %d",sum);

        }
    }
   return 0;
}

