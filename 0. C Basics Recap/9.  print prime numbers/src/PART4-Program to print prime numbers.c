/*
 ============================================================================
 Name        : PART4-Program.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num=0,i=0,j=0,flag=0;
	setbuf(stdout,NULL);

//program to print prime numbers
	printf("Enter the number range:");
	scanf("%d",&num);
	printf("\nThe prime numbers are: ");
	for(i=2;i<=num;i++){
		for(j=2;j<i;j++){
			if(i%j == 0){
				flag=1;
			}
		}
		if(flag==0){
			printf("%d, ",i);
		}
		flag=0;
	}

// Alternate Method
	int fact;
	printf("\nAlternate method for prime no: ");
	for(i=1; i<=num; i++)
	    {
	        fact=0;
	        for(j=1; j<=num; j++)
	        {
	            if(i%j==0)
	                fact++;

	        }
	        if(fact==2)
	            printf("%d, " ,i);

	    }



	return EXIT_SUCCESS;
}
