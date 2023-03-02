/*
 ============================================================================
 Name        : 2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

// program to delete 2 elements after the occurence of a prime no and replace all even numbers by 0..


#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int array[50],i,limit,j,temp,k,size,flag,m;
	setbuf(stdout,NULL);
	printf("Enter the size of array: ");
	scanf("%d", &limit);
	size =limit;
	printf("Enter the values of array:");
	for(i=0;i<limit;i++){
		scanf("%d", &array[i]);
	}

	for(i=0;i<limit;i++){
		flag=0;
		k=array[i];
		for(j=2;j<k;j++){
			if(k%j==0){
				flag = 1;
				break;
			}
		}

		if(flag!=1){

			for(m=i+1;m<limit;m++){
				array[m]=array[m+2];
			}
			limit = limit-2;
		}

	}

	printf("The prime condition is: ");
	for(i=0;i<limit;i++){
		printf("%d, ", array[i]);

	}



	for(i=0;i<limit;i++){
		if(array[i]%2==0)
			array[i]=0;
	}

	printf("\nThe final array is replace all even numbers by 0: ");
	for(i=0;i<limit;i++){
		printf("%d, ", array[i]);
	}



	return EXIT_SUCCESS;
}
