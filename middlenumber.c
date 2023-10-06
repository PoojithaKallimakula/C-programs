/*
Name:K Poojitha
Date:04-10-2023
Description:to find the middle number (by value) of given 3 numbers
Sample input:Enter the Three numbers : 10 20 30
Sample output:The middle number is 20
*/

#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter thr three numbers");
    scanf("%d%d%d",&num1,&num2,&num3);
    if (num1 < num2 && num1 > num3 || num1 > num2 && num1 < num3 )
        printf("The middle number is %d",num1);
    else if (num2 > num1 && num2 < num3 || num2 < num1 && num2 >num3)
        printf("The middle number is %d",num2);
    else
        printf("The middle number is %d",num3);

   return 0;
}

