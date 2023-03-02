/*
 ============================================================================
 Name        : .c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int array[50],i,limit,j,temp,k,size;
	setbuf(stdout,NULL);
	printf("Enter the size of array: ");
	scanf("%d", &limit);
	size =limit;
	printf("Enter the values of array:");
	for(i=0;i<limit;i++){
		scanf("%d", &array[i]);
	}

	for(i=0;i<limit;i++){
		for(j=i+1;j<limit;j++){
			if (array[i]==array[j]){

				for(k=j;k<limit-1;k++){
					array[k]=array[k+1];
				}
				limit--;
				j--;       //if the position of the elements changes, don't increase the index j

			}
		}
	}

	printf("The final array is: ");
	for(i=0;i<limit;i++){
		printf("%d, ", array[i]);
	}

	return EXIT_SUCCESS;
}
