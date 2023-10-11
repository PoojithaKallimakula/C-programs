/*
Name:K Poojitha
Date:11-10-2023
Description:Read a number from the user. Check number of set bits in a given number. If number of set bits is odd, then Bit parity is odd. Similarly, If number of set bits is even, then Bit parity is even. 
For example, If num = 7, number of set bits = 3 which is odd number, so bit parity is odd. Similarly, if num = 3, number of set bits = 2, bit parity should be even
Sample input:Enter the number : 7

Number of set bits = 3
Sample output:Bit parity is Odd
*/

#include<stdio.h>
int main()
{
    int num,parity,count=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    for(int i=0 ;i<31 ;i++ )
    {
        if(num&01)
        {
            count++;
        }
         num=num>>1;        

    }
    if( count%2 == 0 )
        printf("Bit parity is Even");
    else
        printf("Bit parity is Odd");

   return 0;
}

