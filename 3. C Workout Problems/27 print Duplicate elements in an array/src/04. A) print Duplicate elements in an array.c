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

	int array[50],i,limit,j,temp,k,size,count;
	setbuf(stdout,NULL);
	printf("Enter the size of array: ");
	scanf("%d", &limit);
	size =limit;
	printf("Enter the values of array:");
	for(i=0;i<limit;i++){
		scanf("%d", &array[i]);
	}
	printf("The duplicate elements are: ");
	for(i=0;i<limit;i++){
		count=0;
		for(j=i+1;j<limit;j++){

			if (array[i]==array[j]){

				count=1;
				array[j]=-22;  //giving a random value to the duplicate array
			}

		}
		if(count==1 && array[i]!=-22)
			printf("%d, ",array[i]);

	}




	return EXIT_SUCCESS;
}


