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
/*
 How to merge two unsorted arrays in sorted order ?
4. Write a program to merge and sort elements of two different arrays
38. Write a program to merge two arrays of the same size sorted in
descending
order.

*/


int main(void) {
	int array1[500],size,i,temp, array2[500], merged[500],k,j,n;

	setbuf(stdout,NULL);
	printf("Enter the size of the arrays: ");
	scanf("%d",&size);
	printf("Enter the values of array 1 ");
	for(i=0;i<size;i++){
		scanf("%d",&array1[i]);
	}

	printf("Enter the values of array 2 ");
	for(i=0;i<size;i++){
		scanf("%d",&array2[i]);
	}
	k=0;
	n=size;
	for(i=n;i<size*2;i++){
		array1[i]=array2[k];
				   k++;
		}






	printf("The merged array is\n");
	for(i=0;i<size*2;i++){
		printf("%d ",array1[i]);
	}

//	for(i=0;i<size*2;i++){

//		if(array1[i]<array1[])
//	}

	return EXIT_SUCCESS;
}
