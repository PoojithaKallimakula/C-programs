/*
Name:K Poojitha
Date:03-11-2023
Description:c-type library functions check whether ch, which must have the value of an unsigned char or EOF, falls into a certain character class according to the current locale.
isalnum() - checks for an alphanumeric character; it is equivalent to (isalpha(c) || isdigit(c)).
Sample input:Enter the character: a
Sample output:The character 'a' is an alnum character
*/
#include<stdio.h>
int my_isalnum(int);

int main()
{
    char ch;
    int ret;
    
    printf("Enter the character:");
    scanf("%c", &ch);
    
    ret = my_isalnum(ch);
    /*
        Based on return value, print whether ch is alphanumeric or not
    */
    ret == 1 ? printf("The character '%c' is an alnum character",ch) : printf("The character '%c' is not an alnum character",ch);
} 
int my_isalnum(int ch)
{
  return   ch >= 65 && ch <= 90 || ch >= 97 && ch <=122 || ch >= 48 && ch <=57 ? 1 : 0;
}
