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

int main(void) {
	int i,j;
	setbuf(stdout,NULL);
//break
	printf(" Break example");
	for (i=0;i<5;i++){
		printf("\nHello ");
		if(i==3){
			break;
		}
		printf("Everybody");
	}
//continue
	printf("\n Continue example");
	for(j=0;j<5;j++){
		printf("\nHello ");
		if(j==3){
			continue;
		}
		printf("Everybody");
	}

	return EXIT_SUCCESS;
}
