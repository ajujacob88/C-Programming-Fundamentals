/*
 ============================================================================
 Name        : .c
 Author      : Aju
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int size,i,flag=0;
	char string[50];
	setbuf(stdout,NULL);
	printf("Enter a string: ");
	scanf("%s",string);
	size = strlen(string);
	for(i=0;i<size;i++){
		if(string[i]!=string[size-i-1]){
			flag++;
			break;
		}
	}
	if(flag==0)
		printf("The entered string is a Palindrome");
	else
		printf("The entered string is not a palindrome");


	return EXIT_SUCCESS;
}
