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

	int array1[50][50],array2[50][50],sum[50][50],size,i,j;
	setbuf(stdout,NULL);
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	printf("Enter the values of Array 1: ");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&array1[i][j]);
		}
	}

	printf("Enter the values of Array 2: ");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&array2[i][j]);
		}
	}

	printf("The sum of 2 arrays is: \n");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			sum[i][j]=array1[i][j]+array2[i][j];
			printf("  %d\t",sum[i][j]);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
