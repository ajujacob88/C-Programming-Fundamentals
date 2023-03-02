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
	int limit,i,j,k=0;
	setbuf(stdout,NULL);
	printf("Enter limit");
	scanf("%d",&limit);
	for(i=1;i<=limit;i++){
		for(j=1;j<=3*i;j++){
			printf("* ");
		}
		printf("\n");

	//	if(i==limit){
	//		break;
	//	}

		for(j=1;j<2+k;j++){
			printf("* ");
			printf("\n");
		}
		k++;

	}



	return EXIT_SUCCESS;
}
