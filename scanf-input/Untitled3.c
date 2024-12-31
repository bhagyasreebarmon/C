#include <stdio.h>

int main() {
    char lowercaseChar;

    // Prompt the user to enter a lowercase character
    printf("Enter a lowercase character: ");
    scanf(" %c", &lowercaseChar);

    // Convert to uppercase using ASCII values
    char uppercaseChar = lowercaseChar - ('a' - 'A');

    // Print the result
    printf("Uppercase character: %c\n", uppercaseChar);

    return 0;
}


