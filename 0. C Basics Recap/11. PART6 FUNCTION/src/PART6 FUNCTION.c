/*
 ============================================================================
 Name        : PART6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//Function type 1 - function without argument and without return value..

void sum();
void sum2(int,int);
int sum3(int,int);
int sum4();

int main(void) {
	int a,b,c,d;
	setbuf(stdout,NULL);
	printf("We are calling the Function type 1 - function WITHOUT argument and WITHOUT return value..\n");
	sum();

	printf("\n\nNow calling the Function type 2 - function WITH argument and WITHOUT return value..\n");
	printf("Enter 2 nos:");
	scanf("%d %d",&a,&b);
	sum2(a,b);

	printf("\n\nNow calling the Function type 3 - function WITH argument and WITH return value..\n");
	printf("Enter 2 nos:");
	scanf("%d %d",&a,&b);
	c=sum3(a,b);
	printf("The sum returned is %d",c);


	printf("\n\nNow calling the Function type 4 - function WITHOUT argument and WITH return value..\n");
	d=sum4();
	printf("The sum returned is %d",d);

	return EXIT_SUCCESS;
}

void sum(){
	int num1,num2,sum;
	printf("Enter 2 nos:\n");
	scanf("%d %d",&num1,&num2);
	sum=num1+num2;
	printf("Result is %d",sum);

}

void sum2(int n1,int n2){
	int sum;
	sum = n1+n2;
	printf("The sum is %d",sum);

}

int sum3(int n1,int n2){
	int sum;
	sum = n1+n2;
	return sum;
}

int sum4(){
	int num1,num2,sum;
	printf("Enter 2 nos: ");
	scanf("%d %d", &num1,&num2);
	sum=num1+num2;
	return sum;

}
