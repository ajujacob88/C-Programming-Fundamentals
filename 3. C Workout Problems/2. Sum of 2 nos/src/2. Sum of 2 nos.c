/*
 ============================================================================
 Name        : .c
 Author      : Aju
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

//2.	Accept two inputs from the user and output its sum.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1;
	float num2, sum;
	setbuf(stdout,NULL);
	printf("Enter the 2 nos: ");
	scanf("%d %f", &num1, &num2);
	sum = num1+num2;
	printf("The sum of %d and %f is %f",num1, num2, sum);
	return EXIT_SUCCESS;
}
