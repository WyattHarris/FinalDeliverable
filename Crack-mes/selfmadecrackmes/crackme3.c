#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(int argc, char **argv) {
    srand(time(0)); // Seed random number generator

    // Generate a random 10-letter uppercase key
    char key[11]; // 10 chars + null terminator
    for (int i = 0; i < 10; i++) {
        key[i] = 'A' + (rand() % 26); // Random uppercase letter
    }
    key[10] = '\0'; // Null-terminate the string

    printf(key);
    // Ask user for input
    printf("Enter the key: ");
    char input[20];
    scanf("%10s", input); // Read up to 10 characters

    // Check if input matches the key
    if (strcmp(input, key) == 0) {
        printf("Correct!\n");
    } else {
        printf("Wrong\n");
    }

    return 0;
}