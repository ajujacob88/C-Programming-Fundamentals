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
	int limit,i,j,k,f=1;
	setbuf(stdout,NULL);
	printf("Enter limit: ");
	scanf("%d",&limit);

	for(i=1;i<=limit;i++){

		for(j=1;j<=f;j++){
			printf("*\n");

		}
		f++;



		for(j=1;j<=4*i;j++){
			printf("* ");
		}
		printf("\n");

	}






}
