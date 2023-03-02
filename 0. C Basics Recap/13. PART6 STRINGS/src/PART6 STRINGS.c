/*
 ============================================================================
 Name        : PART6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	char string1[20], string2[10]={'s','a','j','u'}, string3[10]="ajujacob",string4[50]={};
	printf("Enter the name:");
	scanf("%s",string1);

	printf("\nstring 1 is %s",string1);
	printf("\nstring 2 is %s",string2);
	printf("\nstring 3 is %s",string3);
	printf("\nstring 4 is %s",string4);
	printf("\nstring 1 is %s",string1);

	printf("\n3rd character entered in string 1 is %c",string1[2]);
	return EXIT_SUCCESS;
}
