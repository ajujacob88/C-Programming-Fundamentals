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

	// Write a program to reverse an array without using an additional array?

	int array[500],size,i,temp;

	setbuf(stdout,NULL);
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	printf("Enter the values of array ");
	for(i=0;i<size;i++)
		scanf("%d",&array[i]);

	for(i=0;i<size/2;i++){
		temp=array[i];
		array[i]=array[size-i-1];
		array[size-i-1]=temp;

	}
	printf("The reversed array is\n");
	for(i=0;i<size;i++){
		printf("%d",array[i]);
	}

	return EXIT_SUCCESS;
}
