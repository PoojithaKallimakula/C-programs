/*
Name:K Poojitha
Date:03-11-2023
Description:In mathematics, the Fibonacci numbers or Fibonacci sequence are the numbers in the following integer sequence  0, 1, -1, 2, -3, 5, -8, 13, -21, 34, -55, 89, -144 . . .
By definition, the first two numbers in the Fibonacci sequence are 0 and 1, each subsequent number is the subtraction of the previous two
Sample input:Enter a number: 8
Sample output:0, 1, -1, 2, -3, 5, -8
*/

#include <stdio.h>

void negative_fibonacci(int, int, int, int);

int main()
{
    int limit;

    printf("Enter the limit : ");
    scanf("%d", &limit);
    negative_fibonacci(limit, 0, 1, limit);
}
void negative_fibonacci(int limit,int a,int b,int c)
{
    static int sum;
    if (c > 0)
        printf("Invalid Input");
    if (sum >= c && sum <= -c)
    {
        printf("%d, ",sum);
        a=b;
        b=sum;
        sum=a-b;
        negative_fibonacci(limit-1,a,b,c);
    }
}

    
