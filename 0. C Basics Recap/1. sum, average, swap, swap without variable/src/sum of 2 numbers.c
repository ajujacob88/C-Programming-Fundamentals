/*
 ============================================================================
 Name        : sum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num1, num2, sum, a,b,s, average, temp;
	setbuf(stdout, NULL);
	printf("Enter first no:");
	scanf("%f", &num1);
	printf("Enter second no:");
	scanf("%f", &num2);
	sum = num1 + num2;
	printf("The sum of %f and %f is %f \n", num1, num2, sum);

	printf("enter other 2 nos:");
	scanf("%f%f", &a, &b);
	s = a + b;
	printf("The sum of %f and %f is %f", a, b, s);

	average = (num1 + num2 + a + b)/4;
	printf("\n The average of these 4 values is %f",average);

	//SWAPPING of a and b, no direct swap function in cprogramming, swap fn available only in cpp
	temp = a;
	a = b;
	b = temp;
	printf("\n The value of a and b swapped is a = %f and b = %f",a,b);

	// Swapping without using the third variable
	int x=15, y=20;
	x = x + y;
	y = x - y;
	x = x - y;
	printf("\n\nSwapping without using 3rd variable is x = %d and y =%d", x, y);

	return EXIT_SUCCESS;
}
