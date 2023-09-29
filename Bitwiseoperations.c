#include <stdio.h>

int main() {
    int num1, num2;

    // Prompt the user to enter the first number
    printf("Enter the first number: ");
    scanf("%d", &num1);

    // Prompt the user to enter the second number
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Perform bitwise AND operation and display the result
    printf("Bitwise AND: %d\n", num1 & num2);

    // Perform bitwise OR operation and display the result
    printf("Bitwise OR: %d\n", num1 | num2);

    // Perform bitwise XOR operation and display the result
    printf("Bitwise XOR: %d\n", num1 ^ num2);

    // Perform bitwise LEFT SHIFT operation and display the result
    printf("Bitwise LEFT SHIFT << 2: %d\n", num2 << 2);

    // Perform bitwise NOT operation and display the result
    printf("Bitwise NOT of num2: %d\n", ~num2);

    return 0;
}

