/*
Name:K Poojitha
Date:30-10-2023
Description:a. Read number num from user.
b. Read number n from user.
c. Read number pos from user.
d. Fetch n number of bits from given position 'pos' (starting from LSB) of num and return the decimal value of it.
If num is 12, n is 3 and pos is 4
         7 6 5 4 3 2 1 0
12 -> 0 0 0 0 1 1 0 0 
 The program should print 3 (0 1 1).
Sample input:Enter the number: 12
Enter number of bits: 3
Enter the pos: 4
Sample output:Result = 3
*/

#include<stdio.h>

int get_nbits_from_pos(int, int, int);

int main()
{
    int num, n, pos, res = 0;

    printf("Enter num, n and val:");
    scanf("%d%d%d", &num, &n, &pos);

    res = get_nbits_from_pos(num, n, pos);

    printf("Result = %d\n", res);
}
int get_nbits_from_pos(int num,int n,int pos)
{
    int mask = ((1<<n)-1) << (pos - n + 1);
    return (num & mask) >> (pos - n + 1);
 }

