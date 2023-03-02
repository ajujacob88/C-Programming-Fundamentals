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
	for(i=0;i<12;i++){
		if(i==0){
			for(j=0;j<2;j++){
				printf("* ");
			}
			printf("\n");
		}
		else if(i==4||i==5){
			for(j=0;j<4;j++){
				printf("* ");
			}
			printf("\n");
		}

		else if(i==9 || i==10||i==11){
			for(j=0;j<8;j++){
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




