/*
 ============================================================================
 Name        : ASSIGNMENT.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num=0, answer=0,i=0,sum=0,j=0;
	setbuf(stdout,NULL);
//Assignment Day 4 Q1
	printf("Question 1:Program to print the multiplication table of given number");
	printf("\nEnter the no:");
	scanf("%d",&num);
	printf("\nMultiplication table of %d is:\n",num);
	for(i=1;i<=20;i++){
		answer = i*num;
		printf("%d * %d = %d\n",i,num,answer);
	}

//Assignment Day 4 Q2:
	printf("\nQuestion 2:Program to find the sum of all the odd numbers for a given limit\n");
	for(i=1;i<=num;i+=2){
		sum=sum+i;
	}
	printf("sum of odd nos upto %d is %d",num,sum);


//Assignment Day 4 Q3:
	printf("\nQuestion 3: Write a program to print the following pattern \n");
	for(i=0;i<num;i++){
		for(j=1;j<=i;j++){
			printf(" %d ",j);
		}
		printf("\n");
	}



	return EXIT_SUCCESS;
}
