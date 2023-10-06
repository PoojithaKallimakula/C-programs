/*
Name:K Poojitha
Date:06-10-2023
Description:• In number theory, a perfect number is a positive integer that is equal to the sum of its proper positive divisors, that is, the sum of its positive divisors excluding the number itself (also known as its aliquot sum).
• Equivalently, a perfect number is a number that is half the sum of all of its positive divisors (including itself).
Sample input:Enter a number: 6
Sample output:Yes, entered number is perfect number
*/

#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    if ( num < 0 )
        printf("Error : Invalid Input, Enter only positive number");
    else
    {
        for (int i=1;i<num;i++)
        {
            if ( num%i == 0 )
                sum=sum+i;
        }
        if ( sum == num )
            printf("Yes, entered number is perfect number");
        else
            printf("No, entered number is not a  perfect number");
    }
   return 0;
}

