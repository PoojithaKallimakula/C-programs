/*
Name:K Poojitha
Date:03-11-2023
Description:c-type library functions check whether ch, which must have the value of an unsigned char or EOF, falls into a certain character class according to the current locale.
ispunct() - checks  for  any  printable character which is not a space or an alphanumeric character.
Sample input:Enter the character: a
Sample output:Entered character is not punctuation character
*/

#include <stdio.h>

int my_ispunct(int);

int main()
{
    char ch;
    int ret;

    printf("Enter the character:");
    scanf("%c", &ch);

    ret = my_ispunct(ch);
    /*
        Based on return value, print whether ch is lower case alphabet or not
    */
    ret == 1 ? printf("Entered character is punctuation character") : printf("Entered character is not punctuation character");
}
int my_ispunct(int ch)
{
    
  return !( ch >= 72 && ch <= 75 || ch >= 65 && ch <= 90 || ch >= 97 && ch <=122 || ch >= 48 && ch <=57 ) ? 1 : 0;
}
