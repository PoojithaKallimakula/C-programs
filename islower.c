/*
Name:K Poojitha
Date:03-11-2023
Description:c-type library functions check whether ch, which must have the value of an unsigned char or EOF, falls into a certain character class according to the current locale.
islower() - checks for a lower case alphabet whether entered character is between 'a' to 'z'.
Sample input:Enter the character: a
Sample output:Entered character is lower case alphabet
*/
#include <stdio.h>

int my_islower(int);

int main()
{
    char ch;
    int ret;
    
    printf("Enter the character:");
    scanf("%c", &ch);
    
    ret = my_islower(ch);
    /*
        Based on return value, print whether ch is lower case alphabet or not
    */
    ret == 1 ? printf("Entered character is lower case alphabet") : printf("Entered character is not  lower case alphabet");
}
int my_islower(int ch)
{
    return ch >= 97 && ch <= 122 ? 1 : 0;
}
