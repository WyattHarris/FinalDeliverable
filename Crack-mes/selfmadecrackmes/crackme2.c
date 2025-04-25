#include <stdio.h>

int password(char *b)
{

	if (b[0] == 'h') {
	if (b[1] == 'e') {
	if (b[2] == 'r') {
	if (b[3] == 'e') {
	if (b[4] == '_') {
	if (b[5] == 'I') {
	if (b[6] == '_') {
	if (b[7] == 'a') {
	if (b[8] == 'm') {
	if (b[9] == '!') {
	//break up to password into multiple portions.
		return 1;
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	

	return 0;
}


int main(int argc, char **argv)
{
	char buffer[64];
	//Check for user input
	printf("What is the password?: ");
	scanf("%64s", buffer);
	//check if user input matches the password
	if (password(buffer)){
		printf("That is correct!\n");
	}
	else{
		printf("Wrong!");
	}
}
