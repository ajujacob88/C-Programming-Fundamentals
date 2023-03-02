/*
 ============================================================================
 Name        : .c
 Author      : Aju
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//Write a program to find the simple interest.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int P;
	float R,n,SI;
	setbuf(stdout, NULL);
	printf("Enter the Principal Amount: ");
	scanf("%d", &P);
	printf("\nEnter the rate of interest and number of years: ");
	scanf("%f %f", &R, &n);
	SI = (P*R*n)/100;
	printf("The simple interest is %f", SI);
	return EXIT_SUCCESS;
}
