#include <stdio.h>

int main() {
    int num;
    int sum = 0;
    int reverse = 0;

    // Prompt the user to enter a number
    printf("Enter the number: ");
    scanf("%d", &num);

    int temp1 = num;

    // Calculate the sum of digits in the number
    while (temp1 != 0) {
        sum = sum + temp1 % 10;
        temp1 = temp1 / 10;
    }

    int temp = sum;

    // Reverse the sum of digits
    while (temp != 0) {
        reverse = reverse * 10 + temp % 10;
        temp = temp / 10;
    }

    // Calculate the magic number by multiplying sum and reverse
    int magic = sum * reverse;

    // Check if the number is a magic number and display the result
    if (magic == num) {
        printf("%d is a magic number\n", num);
    } else {
        printf("%d is not a magic number\n", num);
    }

    return 0;
}


