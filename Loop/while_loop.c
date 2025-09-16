#include <stdio.h>

int main() {
    int count = 1;

    while (count <= 5) {
        printf("Count: %d\n", count);
        count++; // Increment count to eventually make the condition false
    }

    return 0;
}