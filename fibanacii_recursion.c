/*
Name:K Poojitha
Date:03-11-2023
Description:In mathematics, the Fibonacci numbers or Fibonacci sequence are the numbers in the following integer sequence 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144 . . .OR 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144 . . .
By definition, the first two numbers in the Fibonacci sequence are either 1 and 1, or 0 and 1, depending on the chosen starting point of the sequence, and each subsequent number is the sum of the previous two.
Sample input:Enter a number: 8
Sample output:0, 1, 1, 2, 3, 5, 8
*/

#include <stdio.h>

void positive_fibonacci(int, int, int, int);

int main()
{
    int limit;

    printf("Enter the limit : ");
    scanf("%d", &limit);
   positive_fibonacci(limit, 0, 1, limit);
}
void positive_fibonacci(int limit,int a,int b,int c)
{
    static int sum;
    if (limit < 0)
        printf("Invalid Input");
    if (sum <= c)
    {
        a=b;
        b=sum;
        sum=a+b;
        printf("%d, ",b);
        positive_fibonacci(limit-1,a,b,c);
    }
}

    
