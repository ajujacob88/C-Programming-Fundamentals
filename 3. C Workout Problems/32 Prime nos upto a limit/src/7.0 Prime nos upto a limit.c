/*
 ============================================================================
 Name        : 0.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i,j,limit,flag ;
	setbuf(stdout,NULL);

	printf("Enter the limit: ");
	scanf("%d",&limit);

	printf("\nThe prime nos are: ");

	for(i=2;i<=limit;i++){
		flag=0;
		for(j=2;j<i;j++){

			if(i%j==0){
				flag=1;
			}
		}
		if(flag==0)
			printf("%d ",i);

	}

	return EXIT_SUCCESS;
}
