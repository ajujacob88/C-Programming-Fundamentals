/*
 ============================================================================
 Name        : ASSISGNMENT.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int size1,size2, array1[50][50], array2[50][50], result[50][50],size,i,j;

	setbuf(stdout,NULL);
	printf("program to add 2 two dimensional arrays. Program should accept two 2D arrays and display its sum");

	printf("\nEnter the size of arrays:");
	scanf("%d %d",&size1,&size2);

	printf("\nEnter the values of array 1");
	for(i=0;i<size1;i++){
		for(j=0;j<size1;j++){
			scanf("%d",&array1[i][j]);
		}
	}

	printf("\nEnter the values of array 2");
	for(i=0;i<size2;i++){
		for(j=0;j<size2;j++){
			scanf("%d",&array2[i][j]);
		}
	}

	if(size1>size2){
		size=size1;
	}
	else{
		size=size2;
	}

	printf("\nThe sum of 2 arrrays are:\n");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
				result[i][j]=array1[i][j]+array2[i][j];
				printf("%d\t", result[i][j]);
		}
		printf("\n");
	}




	return EXIT_SUCCESS;
}
