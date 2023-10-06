/*
Name:K Poojitha
Date:04-10-2023
Description:Max of two numbers
Sample input:
Enter the num1 : 10
Enter the num2 : 20 
Sample output:
Max of two numbers is 20
*/

#include<stdio.h>
int main()
{
    int num1,num2;    //declare two variable num1,num2
    printf("Enter the num1 : ");    //prompt the message
    scanf("%d",&num1);  //read num1 from user
    printf("Enter the num2 : ");    //prompt the message
    scanf("%d",&num2);  //read num2 from user
    if (num1>num2)  //check if num1 is greater than num2
    {
        printf("max of two numbers : %d",num1); //print the message "max of two numbers : num1"
    }
    else
    {
        printf("max of two numbers : %d",num2); //print the mesaage "max of two numbers : num2"
    }
   return 0;
}

