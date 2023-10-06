/*
Name:K Poojitha
Date:04-10-2-2023
Description:You have to read 2 interger the name as num1 and num2 and read 1 character name as operator and write a code to perform arithmetic operations( +, -, x, /).
Sample input:Enter the Two numbers : 10 20
Enter the operator : +
Sample output:The Result is : 30
*/

#include<stdio.h>
int main()
{
   int num1,num2;
   char opr;
   printf("Enter the two numbers :");
   scanf("%d%d",&num1,&num2);
   printf("Enter the operator : ");
   scanf(" %c",&opr);
   switch(opr){
       case '+' :
           printf("The Result is : %d",num1+num2);
           break;
       case '-' :
           printf("The Result is : %d",num1-num2);
           break;
       case 'x' :
           printf("The Result is : %d",num1*num2);
           break;
       case '/' :
           printf("The Result is : %d",num1/num2);
           break;
      default:
           printf("Invalid operator");
   }
}

