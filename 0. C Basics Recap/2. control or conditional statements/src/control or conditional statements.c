/*
 ============================================================================
 Name        : control.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {
	// check a no is positive or negative
	int num;
	setbuf(stdout, NULL);
	printf("Enter a number:");
	scanf("%d", &num);
	if(num < 0)
	{
		printf("number is negative");
	}
	else if(num == 0)
	{
		printf("Number is zero");
	}
	else
	{
		printf("Number is positive");
	}

//program 2: check which is the larger number in 2 numbers entered
	int num1, num2;
	printf("\nEnter 2 numbers: ");
	scanf("%d%d",&num1,&num2);
	if(num1<num2){
		printf("\nThe second number %d is larger ", num2);
	}
	else if(num1==num2){
		printf("\nThe two number are equal");
	}
	else{
		printf("\nThe first number %d is larger ",num1);
	}

// program 3 - largest no in 3 numbers entered - using nested if method
	int n1,n2,n3;
	printf("\nEnter 3 nos:");
	scanf("%d%d%d",&n1,&n2,&n3);
	if(n1 > n2){
		if(n1>n3){
			printf("%d is larger",n1);
		}
		else
			printf("%d is larger", n3);
	}
	else if(n2>n3){
		printf("%d is larger",n2);
	}
	else{
		printf("%d is larger",n3);
	}

// program 3 - largest no in 3 numbers entered another way - using else if ladder
		int n4,n5,n6;
		printf("\nEnter 3 nos:");
		scanf("%d%d%d",&n4,&n5,&n6);
		if(n4 >= n5 && n4>=n6){
			printf("%d is larger",n4);
		}
		else if(n5>=n4 && n5>=n6){
			printf("%d is larger",n5);
		}
		else{
			printf("%d is larger",n6);
		}


	return EXIT_SUCCESS;
}
