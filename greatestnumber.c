/*
Name:K Poojitha
Date:04-10-2023
Description:to find the greatest of given 3 numbers
Sample input:Enter the three numbers : 10 20 30
Sample output:Max of three number is 30
*/

#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter the three numbers :");
    scanf("%d%d%d",&num1,&num2,&num3);
    if (num1>num2 && num1>num3)
        printf("max of two numbers : %d",num1);
    else if (num2>num1 && num2>num3)
        printf("max of two numbers : %d",num2);
    else
        printf("max of two numbers :%d",num3);
   return 0;
}

