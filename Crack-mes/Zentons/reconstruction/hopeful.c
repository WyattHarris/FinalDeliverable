#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include <windows.h>

void main() {
  char input[128];

  if (IsDebuggerPresent()) {
    printf("Debugger detected! GO AWAY!\n");
  }
  else{
    // Prompt the user for input
  printf("Enter the password: ");
  fgets(input, sizeof(input), stdin);

  // Remove newline character if present
  input[strcspn(input, "\n")] = '\0';

  // Check the password
  if (passwordcheck(input) == true) {
      printf("Password correct! Access granted.\n");
  } else {
      printf("Incorrect password!\n");
  }

  printf("Press Enter to exit...");
  getchar(); // Wait for Enter
  getchar(); // again


  }



  
  
}


bool passwordcheck(char input){
  if (strcmp(input, "secret123") == 0) {
    return true;
} else {
    return false;
}
}

