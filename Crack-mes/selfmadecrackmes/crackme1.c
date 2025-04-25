#include <stdio.h>
#include <string.h>


int main(int argc, char **argv){
    char password[32];

    printf("Enter the password: ");
    scanf("%31s", password);

    if (strcmp(password, "Thatwaseasy!") == 0) {
        printf("Correct! Well done.\n");
    } else {
        printf("Wrong password. Try again.\n");
    }
}