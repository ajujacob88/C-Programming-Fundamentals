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
	int i,j;
	setbuf(stdout,NULL);
	//for(i=0;i<9;i++){
	//	printf("* ");
	//}
	for(i=0;i<9;i++){
		if(i==1 || i==4 || i==8 ){
			for(j=0;j<=i;j++){
				printf("* ");
			}
			printf("\n");
		}
		else{
			printf("* ");
			printf("\n");
		}


	}


	return EXIT_SUCCESS;
}
