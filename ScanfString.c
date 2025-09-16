#include <stdio.h>

int main() {
    char name[20]; // Declare a character array to store the name

    printf("Enter your name (without spaces): ");
    scanf("%s", name); // Read the name from the user

    printf("Hello, %s!\n", name); // Print the entered name

    return 0;
}