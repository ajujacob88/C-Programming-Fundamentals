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

		for(j=1;j<=5*f;j++){
			printf("* ");
		}
		printf("\n");
		f++;
		if(f==3)
			f=1;

		if(i==limit)
			break;

		g=g*2;
		for(j=1;j<=g;j++){
			printf("*\n");
		}


	}



}
