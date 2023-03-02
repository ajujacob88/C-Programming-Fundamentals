/*
 ============================================================================
 Name        : .c
 Author      : Aju
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
// Receive value and then print
/*

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(void) {
	int i,j, length;
	//char str[50]="MALAYALAM";
	char str[50];
	setbuf(stdout,NULL);
	printf("enter\n");
	scanf("%s",str);
	length = strlen(str);

	for(i=0;i<length;i++){
		for(j=0;j<=i;j++){
			printf("%c ",str[j]);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}*/
//Another way - particular string

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(void) {
	int i,j;
	char str[50]="MALAYALAM";
	setbuf(stdout,NULL);


	for(i=0;i<9;i++){
		for(j=0;j<=i;j++){
			printf("%c ",str[j]);
		}
		printf("\n");
	}


	return EXIT_SUCCESS;
}
