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
	int size,arrayin[50],arrayout[50],i;
	setbuf(stdout,NULL);
	printf("Enter the limit of the array: ");
	scanf("%d", &size);
	printf("Enter the values of the array: ");
	for(i=0;i<size;i++){
		scanf("%d",&arrayin[i]);
	}
	printf("Multiplied output array is: ");
	for(i=0;i<size-1;i++){
		arrayout[i]=arrayin[i]*arrayin[i+1];
		printf("%d, ",arrayout[i]);
	}

	return EXIT_SUCCESS;
}
