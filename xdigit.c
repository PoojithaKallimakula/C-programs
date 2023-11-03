/*
Name:K Poojitha
Date:03-11-2023
Description:c-type library functions check whether ch, which must have the value of an unsigned char or EOF, falls into a certain character class according to the current locale.
isxdigit() - checks for a hexadecimal digit i.e. given character is between '0' - '9' or 'a' - 'f' or 'A' - 'F'
Sample input:Enter the character:3
Sample output:Entered character is  an hexadecimal digit
*/
#include <stdio.h>

int is_xdigit(int);

int main()
{
    char ch;
    short ret;
    
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    ret = is_xdigit(ch);
    
    /* Based on the return value of the function print the message */
    
    ret == 1 ? printf("Entered character is  an hexadecimal digit") : printf("Entered character is not  an hexadecimal digit");
    return 0;
}
//function definition
int is_xdigit(int ch)
{
    return ch >= 48 && ch <= 57 || ch >=65 && ch <= 70 || ch >= 97 && ch <= 102 ? 1 : 0;
}
