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
	int array1[500],size,i,temp, array2[500], merged[500],k=0,j,n,p;

	setbuf(stdout,NULL);
	printf("Enter the size of the arrays: ");
	scanf("%d",&size);
	printf("Enter the values of array 1 ");
	for(i=0;i<size;i++){
		scanf("%d",&array1[i]);
	}
	printf("Enter the position to delete:");
	scanf("%d", &p);

	for(i=p-1;i<size-1;i++){
		array1[i]=array1[i+1];

		//if(i==size-1){
		//	array1[i]=0;
		//}


	}
	size--;
	printf("The final array is:\n");
	for(i=0;i<size;i++){
		printf("%d ",array1[i]);
	}



	return EXIT_SUCCESS;
}
