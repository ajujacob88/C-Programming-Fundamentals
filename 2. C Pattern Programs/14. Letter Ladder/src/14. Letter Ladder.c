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

	for(i=1;i<=limit;i++){

		for(j=1;j<=i;j++){
			printf("X X\n");
		}

		for(j=1;j<=i;j++){
				printf("_ ");
		}

		f=f*2;
		for(j=1;j<=f;j++){
			printf("X ");
		}
		printf("\n");



	}
}
