/*
Name:K Poojitha
Date:05-10-2023
Description: The user entered number should identified whether its a odd or a even number. Mention its sign too.
Sample input:Enter the value of 'n' : -2
Sample output:-2 is negative even number
*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of 'n' :");
    scanf("%d",&n);
    if ( n  == 0 )
        printf("%d is neither even nor odd",n);
    else if ( n%2 == 0 )
    {
        if (n > 0)
            printf("%d is positive even number",n);
        else
            printf("%d is negative even number",n);
    }
    else
    {
        if (n > 0)
            printf("%d is positive odd number",n);
        else
            printf("%d is negative odd number",n);
    }
            
   return 0;
}

