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
	int size,array[50],i,flag=0;
	setbuf(stdout, NULL);
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	printf("Enter the values of the array: ");
	for(i=0;i<size;i++){
		scanf("%d",&array[i]);
	}

	for(i=0;i<size;i++){
		if(array[i]%2==0){
			flag++;
		}
	}
	printf("Number of even numbers in the given array is %d",flag);

	return EXIT_SUCCESS;
}
