/*
Name:K Poojitha
Date:30-10-2023
Description:a. Read number num from user.
b. Read number n from user.
c. Do error checking
  -> If n is greater than integer size, assign n value as sizeof integer.
d. Print n number of bits of num from LSB end.
If num is 10 and n is 12, then print last 12 bits of binary representation of 10.
The output should be -> 0 0 0 0 0 0 0 0 1 0 1 0
Sample input:Enter the number: 10
Enter number of bits: 12
Sample output:Binary form of 10: 0 0 0 0 0 0 0 0 1 0 1 0 
*/

#include<stdio.h>
int print_bits(int, int);

int main()
{
    int num, n;
    
    printf("Enter num, n :\n");
    scanf("%d%d", &num, &n);
    
    printf("Binary form of %d:", num);
    print_bits(num, n);
 }
int print_bits(int num , int n)
{
    for(int i = 12 ; i >= 1 ; i--)
        printf("%d ",(num & (1 << i)) >> i);
}

