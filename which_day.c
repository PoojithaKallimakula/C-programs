/*
Name:K Poojitha
Date:10-10-2023
Description:Suppose, in a week let us assume first day is 'Sunday', then second day will be 'Monday' and so on. If first day is 'Monday' then the second day will be 'Tuesday' and so on.
Sample input:
Enter the value of 'n' : 9
Choose First Day :
1. Sunday
2. Monday
3. Tuesday
4. Wednesday
5. Thursday
6. Friday
7. Saturday
Enter the option to set the first day : 2
Sample output:The day is Tuesday
*/

#include<stdio.h>
int main()
{
    int n,option;
    printf("Enter the value of 'n' : ");
    scanf("%d",&n);
    if( n > 0 && n < 366 )
    {
    printf("Choose First Day :\n1. Sunday\n2. Monday\n3. Tuesday\n4. Wednesday\n5. Thursday\n6. Friday\n7. Saturday\n");
    printf("Enter the option to set the first day : ");
    scanf("%d",&option);
    if( option > 0 && option < 8 )
    {

       int  result=(n+option-2)%7+1;            
        switch(result)
        {
            case 1 :
                printf("The day is Sunday");
                break;
            case 2 :
                printf("The day is Monday");
                break;
            case 3 :
                printf("The day is Tuesday");
                break;
            case 4 :
                printf("The day is Wednesday");
                break;
            case 5 :
                printf("The day is Thursday");
                break;
            case 6 :
                printf("The day is Friday");
                break;
            case 7 :
                printf("The day is Saturday");

        }

    }
    
    else
        printf("Error: Invalid input, first day should be > 0 and <= 7");
    }
    
    else
        printf("Error: Invalid Input, n value should be > 0 and <= 365");

   return 0;
}

