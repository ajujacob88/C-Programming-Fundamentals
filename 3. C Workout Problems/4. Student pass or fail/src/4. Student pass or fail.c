/*
 ============================================================================
 Name        : .c
 Author      : Aju
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

//Write a program to check whether a student has passed or failed in a subject after he or she enters their mark (pass mark for a subject is 50 out of 100).


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float mark;
	setbuf(stdout, NULL);
	printf("Enter the mark of the subject:");
	scanf("%f",&mark);
	if(50<=mark && mark<=100){
		printf("The student passed the subject");
	}
	else if(0<=mark && mark<50){
		printf("The student failed the subject");
	}
	else
		printf("The mark you entered is invalid");

	return EXIT_SUCCESS;
}
