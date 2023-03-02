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

int main(void) {
	int limit,i,j,k,f=1,g=1;
	setbuf(stdout,NULL);
	printf("Enter limit: ");
	scanf("%d",&limit);

	for(i=limit;i>0;i--){

		for(j=1;j<=i;j++){
			printf("X ");
		}

		printf("_ _");

		printf("\n");

		printf("_ ");

		for(j=1;j<=i;j++){
			printf("X ");
		}
		printf("\n");

		for(j=1;j<=f;j++){
			printf("X\n");
		}
		f++;


	}



}
