/*
 ============================================================================
 Name        : Student.c
 Author      : Aju
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

// Write a program to show the grade obtained by a student after they enter their total mark percentage.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float mark;
	setbuf(stdout,NULL);
	printf("Enter the mark:");
	scanf("%f", &mark);
	if(mark>=90 && mark <=100){
		printf("A Grade");
	}
	else if(mark>=90 && mark <=100){
		printf("A Grade");
	}
	else if(mark>=80 && mark <90){
		printf("B Grade");
	}
	else if(mark>=70 && mark <80){
		printf("C Grade");
	}
	else if(mark>=60 && mark <70){
		printf("D Grade");
	}
	else if(mark>=50 && mark <60){
		printf("E Grade");
	}
	else if(mark>=0 && mark <50){
		printf("Failed");
	}
	else {
		printf("Invalid Entry");
	}
	return EXIT_SUCCESS;
}
