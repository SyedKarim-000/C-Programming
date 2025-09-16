#include <stdio.h>

int main() {
    int marks = 0;

    for (int i=0;i<4;i++) {
        marks=marks+30;
        printf("Marks for Sem %d = %d \n", i,marks);
    }

    return 0;
}