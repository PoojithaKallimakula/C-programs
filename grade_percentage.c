/*
Name:K Poojitha
Date:04-10-2023
Description:to print the grade for a given percentage
Sample input:Enter the percentage : 95
Sample output:The Grade is A
*/

#include<stdio.h>
int main()
{
   int percentage;  //declare a variable "percentage"
   printf("Enter the percentage : ");   //print the message
   scanf("%d",&percentage); //read the input from user
   switch(percentage)
   {
       case 91 ... 100 :
           printf("The Grade is A");    //print message if percentage is between 91 to 100
           break;
       case 71 ... 90 :
           printf("The Grade is B");   // print message if percentage is between 71 to 90
           break;
       case 51 ... 70 :
           printf("The Grade is C");    //print message if percentage is between 51 to 70
           break;
       default :
           printf("The Grade is F");    //print message if percentage is below 50
   }
   return 0;
}

