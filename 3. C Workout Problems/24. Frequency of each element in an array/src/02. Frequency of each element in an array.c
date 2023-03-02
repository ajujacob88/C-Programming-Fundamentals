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

	int array[50],i,limit,j,count=0,freq[50];
	setbuf(stdout,NULL);
	printf("Enter the size of array: ");
	scanf("%d", &limit);
	printf("Enter the values of array:");
	for(i=0;i<limit;i++){
		scanf("%d", &array[i]);
		freq[i]=-1;
	}
	printf("The frequency of each elements are: \n");

	/*// my code,,but the problem is repeated elements will print repeatedly, so this is wrong..
	for(i=0;i<limit;i++){
		for(j=0;j<limit;j++){
			if(array[i]==array[j])
				count++;
		}
		printf("%d : %d\n",array[i],count);
		count = 0;
	}

	*/

	for(i=0;i<limit;i++){
		count=1;
		for(j=i+1;j<limit;j++){

			if(array[i]==array[j]){
				count++;
				freq[j]=0;
			}

		}

		if(freq[i]!=0)
			freq[i]=count;
	}

	for(i=0;i<limit;i++){
		if(freq[i]!=0){
			printf("%d occurs %d times\n", array[i],freq[i]);
		}

	}

	return EXIT_SUCCESS;
}
