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
//preincrement ++a and post increment a++ similarly pre decrement --a and post decrement a--

	int a =10,b=10,preincrement,postincrement;
	setbuf(stdout,NULL);
	postincrement = a++;
	printf("postincrement = %d and a = %d",postincrement,a);
	preincrement = ++b;
	printf("\npreincrement = %d and b = %d",preincrement,b);




	return EXIT_SUCCESS;
}
