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

	int array[50],i,limit,j,temp;
	setbuf(stdout,NULL);
	printf("Enter the size of array: ");
	scanf("%d", &limit);
	printf("Enter the values of array:");
	for(i=0;i<limit;i++){
		scanf("%d", &array[i]);
	}
	printf("The array in descending order  is: \n");

	for(i=0;i<limit;i++){
		for(j=i+1;j<limit;j++){
			if(array[i]< array[j]){
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}

		}
	}

	for(i=0;i<limit;i++){
		printf("%d, ",array[i]);
	}

	printf("\nThe largest no in array is: %d\n",array[0]);

	printf("The second largest no in array is: \n");

	for(i=0;i<limit;i++){
			if(array[i]!=array[i+1]){
				printf("%d",array[i+1]);
				break;
			}
	}

	return EXIT_SUCCESS;
}
