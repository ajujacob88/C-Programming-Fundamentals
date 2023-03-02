/*
 ============================================================================
 Name        : Assignment.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/* Write a program to find the simple interest.
Program should accept 3 inputs from the user and calculate simple interest for the given inputs.
Formula: SI=(P*R*n)/100)

 */

int main(void) {

	int p;
	float r, n, simpleinterest;
	setbuf(stdout, NULL);
	printf("Enter the principal amount:");
	scanf("%d", &p);
	printf("Enter rate of interest and no of years respectively:");
	scanf("%f%f",&r, &n);
	simpleinterest = (p*r*n)/100 ;
	printf("\n The simple interest is %f", simpleinterest);

	return EXIT_SUCCESS;
}
