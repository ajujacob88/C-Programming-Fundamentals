/*
 ============================================================================
 Name        : ASSIGNMENT.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

// 1.	Write a program to interchange the values of two arrays
//	a.	Program should accept an array from the user, swap the values of two arrays and display it on the console

	int size =0, array1[1000]={},array2[1000]={}, temp[1000]={},i,flag=0;
	printf("1. Program to interchange the values of two arrays");
	printf("\nEnter the size of Arrays:");
	scanf("%d",&size);
	printf("\nEnter the values of Array 1: ");
	for(i=0;i<size;i++){
		scanf("%d", &array1[i]);
	}
	printf("\nEnter the values of Array 2: ");
	for(i=0;i<size;i++){
		scanf("%d", &array2[i]);
	}
	for(i=0;i<size;i++){
		temp[i]=array1[i];
		array1[i]=array2[i];
		array2[i]=temp[i];
	}
	printf("\nAfter swapping Array 1 becomes:\n");
	for(i=0;i<size;i++){
		printf("%d, ",array1[i]);
	}
	printf("\nAfter swapping Array 2 becomes:\n");
	for(i=0;i<size;i++){
		printf("%d, ",array2[i]);
	}


// 2.	Write a program to find the number of even numbers in an array
//	a.	Program should accept an array and display the number of even numbers contained in that array

	printf("\n2. Program to find the number of even numbers in the  array\n");
	for(i=0;i<size;i++){
		if(array1[i]%2==0){
			flag++;
		}
	}
	printf("The no of even numbers in array is %d",flag);


//3.	Write a program to sort an array in descending order

	printf("\n3. Program to sort an array in descending order\n");
	int j=0,temp1=0;
	for(i=0;i<size-1;i++){
		for(j=i+1;j<size;j++){
			if(array1[i]<array1[j]){
				temp1=array1[i];
				array1[i]=array1[j];
				array1[j]=temp1;
			}
		}
	}
	printf("The sorted array in descending order is:\n ");
	for(i=0;i<size;i++){
		printf("%d, ",array1[i]);
	}

	return EXIT_SUCCESS;
}
