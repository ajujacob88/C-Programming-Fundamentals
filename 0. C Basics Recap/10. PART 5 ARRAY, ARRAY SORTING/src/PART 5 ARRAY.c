/*
 ============================================================================
 Name        : PART.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int array[500],size,i,sum =0;
	printf("Enter the siz of array");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("\nEnter the value of Array[%d]:",i);
		scanf("%d",&array[i]);
	}
	printf("\nThe entered array is: \n");
	for(i=0;i<size;i++){
		printf("Array[%d] = %d,\t",i,array[i]);
	}

//sum the values in the array
	for(i=0;i<size;i++){
		sum=sum+array[i];
	}
	printf("\nThe sum of values is %d: ",sum);

//SEARCH A VALUE
	int searchkey=0,flag=0;
	printf("\n Program to search a value from an array");
	printf("\nEnter the value to search:");
	scanf("%d",&searchkey);
	for(i=0;i<size;i++){
		if(array[i]== searchkey){
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("Value is present in array at array[%d] or %drd position",i,i+1);
	}
	else
		printf("value is not present in array");


//SORTING OF ARRAY ASCENDING
	printf("\nsorted array is:\n");
	int j=0,  temp = 0;
	for(i=0;i<size-1;i++){
		for(j=i+1;j<size;j++){
			if(array[i]>array[j]){
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}

	}

	for(i=0;i<size;i++){
		printf("S[%d]=%d, ",i,array[i]);
	}



	return EXIT_SUCCESS;
}
