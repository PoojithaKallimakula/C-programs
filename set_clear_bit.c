/*
Name:K Poojitha
Date:11-10-2023
Description:Read a number, M and N from the user. You need to check whether N th bit is set(1) or not, If yes, then you need to clear the M th bit of the number and print the updated value of num
Sample input:
Enter the number: 19

Enter 'N': 1

Enter 'M': 4
Sample output:
Updated value of num is 3
*/

#include<stdio.h>
int main()
{
    int num,N,M,temp1,sum;
    printf("Enter the number: ");
    scanf("%d",&num);
    sum=num;
    temp1=num;
    printf("Enter 'N': ");
    scanf("%d",&N);
    printf("Enter 'M': ");
    scanf("%d",&M);
    if((num&(1<<N)) != 0 )
    {
        int mask=~(1<<M);
        sum=temp1&mask;
    }
    printf("Updated value of num is %d",sum);

   return 0;
}

