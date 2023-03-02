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
	int i,j,limit,flag=0,k=1;
	setbuf(stdout,NULL);
	printf("Enter limit: ");
	scanf("%d",&limit);
	for(i=1;i<=limit;i++){


		for(j=1;j<=2*i;j++){
			printf("* ");

		}
		printf("\n");

		flag++;
		if(flag==limit){   //or use i==limit, then also correct
			break;
		}

		for(j=1;j<=3*k;j++){
			printf("* \n");
		}
		k++;

	}

	return EXIT_SUCCESS;
}
