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

	for(i=limit;i>=1;i--){

		for(j=1;j<=2*i;j++){
			printf("* ");
		}
		printf("\n");

		for(j=1;j<=f;j++){
			printf("*\n");
		}
		f++;
	}



}
