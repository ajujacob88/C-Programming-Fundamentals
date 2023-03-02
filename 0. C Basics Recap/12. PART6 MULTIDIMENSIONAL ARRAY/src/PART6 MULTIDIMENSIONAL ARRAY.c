/*
 ============================================================================
 Name        : PART6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int a[500][500],i=0,j=0,row, column;
	printf("ENter the size of the matrix row and column:\n");
	scanf("%d %d",&row,&column);
	printf("Enter the values of matrix row wise\n");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("The entered array matrix is:\n");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}


	return EXIT_SUCCESS;
}
