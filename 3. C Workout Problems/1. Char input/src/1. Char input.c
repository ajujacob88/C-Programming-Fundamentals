/*
 ============================================================================
 Name        : .c
 Author      : Aju
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

// 1. Accept a char input from the user and display it on the console.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char input;
	setbuf(stdout,NULL);
	printf("Enter a character: ");
	scanf("%c",&input);
	printf("The character you entered is %c ",input);
	return EXIT_SUCCESS;
}
