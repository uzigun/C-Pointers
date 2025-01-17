/*
  This program demonstrates the use of a pointer to an array of structures.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

typedef struct information {
    char name[20];
    char family[20];
    int age;
} information;

int main(void) {
    information clients[2];
    information* ptr_to_structur = clients; // Pointer to the array of structures

    // Input loop using pointer
    for (int i = 0; i < 2; i++) {
        printf("\nEnter your name here: ");
        scanf("%s", (ptr_to_structur + i)->name);

        printf("Enter your family name here: ");
        scanf("%s", (ptr_to_structur + i)->family);

        printf("Enter your age here: ");
        scanf("%d", &(ptr_to_structur + i)->age);
    }

    // Output loop using pointer
    for (int i = 0; i < 2; i++) {
        printf("\nName: %s\n", (ptr_to_structur + i)->name);
        printf("Family: %s\n", (ptr_to_structur + i)->family);
        printf("Age: %d\n", (ptr_to_structur + i)->age);
    }

    return 0;
}
