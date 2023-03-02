/*
 ============================================================================
 Name        : ASSIGNMENT.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
For questions look the word document in that folder
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

//1.	Write a program to check whether a student has passed or failed in a subject after he or she enters their mark (pass mark for a subject is 50 out of 100).
	float mark;
	setbuf(stdout,NULL);
	printf("Enter your mark:");
	scanf("%f",&mark);
	if (mark >= 0 && mark < 50 ){
		printf("failed");
	}
	else if (mark>=50 && mark <= 100){
		printf("passed");
	}
	else{
		printf("invalid mark entered");
	}

// QUESTION 2: 2.	Write a program to show the grade obtained by a student after he/she enters their total mark percentage.

	float percent;
	printf("\nEnter the total mark percentage\n");
	scanf("%f",&percent);
	if (percent >=90 && percent <= 100 ){
		printf("Grade: A");
	}
	else if(percent >= 80 && percent <90){
		printf("Grade: B");
	}
	else if(percent>=70 && percent<80){
		printf("grade C");
	}
	else if (percent>=60 && percent<70){
		printf("grade D");
	}
	else if (percent>=50 && percent<60){
		printf("grade E");
	}
	else if (percent>=0 && percent<50){
		printf("Failed");
	}
	else{
		printf("wrong percent entered");
	}


// 3.	Using the ‘switch case’ write a program to accept an input number from the user and output the day as follows
	int day;
	printf("\nENter the input 1 for sunday, 2 for monday, 3 for tuesday, 4 for wednesday, 5 for thursday, 6 for friday, 7 for saturday");
	scanf("%d",&day);
	switch(day){
	case 1:
		printf("Sunday");
		break;
	case 2:
		printf("Monday");
		break;
	case 3:
		printf("Tuesday");
		break;
	case 4:
		printf("Wednesday");
		break;
	default:
		printf("invalid entry");
		break;
	 }


	return EXIT_SUCCESS;
}
