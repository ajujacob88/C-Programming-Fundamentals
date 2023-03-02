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


	for(i=0;i<size;i++){
		if(array1[i]%2!=0){
			for(j=i;j<size;j++){
				array1[j]=array1[j+1];
			}
		size--;
		}
	}



	printf("The final array is:\n");
	for(i=0;i<size;i++){
		printf("%d ",array1[i]);
	}



	return EXIT_SUCCESS;
}
