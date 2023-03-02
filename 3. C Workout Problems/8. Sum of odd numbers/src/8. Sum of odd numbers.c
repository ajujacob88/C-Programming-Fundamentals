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

int main(void) {
	int limit,i,sum=0;
	setbuf(stdout, NULL);
	printf("Enter the limit: ");
	scanf("%d",&limit);
	for(i=1;i<=limit;i+=2){
		sum = sum + i;
	}
	printf("The sum of odd numbers up to %d is %d", limit,sum);
	return EXIT_SUCCESS;
}
