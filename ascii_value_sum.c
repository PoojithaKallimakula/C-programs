#include <stdio.h>

int main() {
    char name[20];

    // Prompt the user to enter a name
    printf("Enter a name: ");
    scanf("%s", name);

    int sum = 0;

    // Iterate through each character in the name
    for (int i = 0; name[i] != '\0'; i++) {
        // Print the ASCII value of the current character
        printf("The ASCII value of %c is %d\n", name[i], name[i]);

        // Add the ASCII value to the running sum
        sum = sum + name[i];
    }

    // Print the sum of ASCII values
    printf("Sum of ASCII values: %d\n", sum);

    return 0;
}

