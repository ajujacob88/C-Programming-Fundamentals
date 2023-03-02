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
	f=limit;

	for(i=1;i<=limit;i++){
		for(j=1;j<=f;j++){
			for(k=1;k<=j;k++){
				printf("X ");
			}
			printf("\n");
		}
		f++;



	}

}
