/*
 ============================================================================
 Name        : .c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int i,j, len;
	setbuf(stdout,NULL);
	char string[50];
	printf("Enter the string: ");
	scanf("%s",string);
	printf("%s",string);

	printf("\nThe subsets of a string are:\n");
	len = strlen(string);
	for(i=0;i<len;i++){

		printf("%c\n",string[i]);
		for(j=0;j<len-i;j++){
			printf("%c",string[j]);
		}
		printf("\n");

		for(j=i;j<len-i;j++){
			printf("%c",string[j]);
		}
		printf("\n");

	}



	/* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
