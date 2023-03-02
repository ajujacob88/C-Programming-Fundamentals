/*
 ============================================================================
 Name        : Interchange.c
 Author      : Aju
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int size,i,Array1[50]={},Array2[50]={},temp[50]={};
	setbuf(stdout,NULL);

	printf("Enter the size of the arrays: ");
	scanf("%d",&size);

	printf("Enter the values of Array 1: ");
	for(i=0;i<size;i++){
		scanf("%d",&Array1[i]);
	}
	printf("Enter the values of Array 2: ");
	for(i=0;i<size;i++){
		scanf("%d",&Array2[i]);
	}

	for(i=0;i<size;i++){
		temp[i]=Array1[i];
		Array1[i]=Array2[i];
		Array2[i]=temp[i];
	}

	printf("\nArrays after swapping:\n");
	printf("Array 1: ");
	for(i=0;i<size;i++){
		printf("%d ",Array1[i]);
	}
	printf("\nArray 2: ");
	for(i=0;i<size;i++){
		printf("%d ",Array2[i]);
	}
	return EXIT_SUCCESS;
}
