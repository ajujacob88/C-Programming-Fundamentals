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

void getArray(int input[50][50],int limit );
void sumArray(int input1[50][50],int input2[50][50],int sum[50][50], int limit);
void displayArray(int input[50][50],int limit);

int main(void) {

	int size, array1[50][50],array2[50][50], arraysum[50][50];
	setbuf(stdout,NULL);
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	printf("Enter the values of Arrray 1: \n");
	getArray(array1,size);
	printf("Enter the values of Arrray 2: \n");
	getArray(array2,size);
	sumArray(array1,array2,arraysum,size);
	displayArray(arraysum,size);

	return EXIT_SUCCESS;
}

void getArray(int input[50][50],int limit){
	int i,j;
	for(i=0;i<limit;i++){
		for(j=0;j<limit;j++){
			scanf("%d",&input[i][j]);
		}
	}
}

void sumArray(int input1[50][50],int input2[50][50],int sum[50][50], int limit){
	int i,j;
	for(i=0;i<limit;i++){
		for(j=0;j<limit;j++){
			sum[i][j]=input1[i][j]+input2[i][j];
			}
		}
}
void displayArray(int input[50][50],int limit){
	int i,j;
	printf("The sum of array 1 and array 2 is: \n");
	for(i=0;i<limit;i++){
		for(j=0;j<limit;j++){
			printf("%d\t", input[i][j]);
		}
		printf("\n");
	}
}


