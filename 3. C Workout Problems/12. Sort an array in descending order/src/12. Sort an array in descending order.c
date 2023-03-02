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
	int size, array[50],i,j,temp;
	setbuf(stdout,NULL);
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	printf("Enter the values of the array");
	for(i=0;i<size;i++){
		scanf("%d",&array[i]);
	}

	for(i=0;i<size;i++){
		for(j=0;j<i;j++){
			if(array[i]>array[j]){
				temp=array[j];
				array[j]=array[i];
				array[i]=temp;
			}
		}
	}
	printf("The sorted array in descending order is :");
	for(i=0;i<size;i++){
		printf("%d, ",array[i]);
	}
	return EXIT_SUCCESS;
}
