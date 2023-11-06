/*
Name:K Poojitha
Date:06-11-2023
Description:to check whether a given number is prime or not using function.
Sample input:Enter a number: 2
Sample output:2 is a prime number

*/
#include <stdio.h>

int is_prime(int);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num < 0 )
        printf("Invalid Input");
    else
        is_prime(num) == 1 ? printf("%d is a prime number",num) : printf("%d is not a prime number",num);
    return 0;
}
int is_prime(int num)
{
    int count=0;
    for(int i=1;i <= num;i++)
    {
        if(num % i == 0)
        {
            count++;
        }
    }
    return count == 2 ? 1 : 0;
}

