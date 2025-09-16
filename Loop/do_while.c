#include <stdio.h>

int main() {
    int count = 1; // Initialize loop control variable

    // Start of the do-while loop
    do {
        printf("Current count: %d\n", count); // Execute at least once
        count++; // Increment the counter
    } while (count <= 5); // Condition checked after execution

    printf("Loop finished. Final count: %d\n", count);

    return 0;
}