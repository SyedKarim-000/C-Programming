#include <stdio.h>

int main() {
    int age;
    int scanf1;
    char initial;
    char name[10];
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your first initial: ");
    scanf(" %c", &initial); 
    printf("You %d years old with initial %c.\n",age, initial);
    printf("Enter Father your age: ");
    scanf(" %d", &age);
    printf("Enter your good name:");
    scanf(" %s", name);
    printf("You father %d years old and name: %s.\n",age, name);

    return 0;
}