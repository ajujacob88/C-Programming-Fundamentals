/*
 ============================================================================
 Name        : elseifladder.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num1,num2,result;
	int op;
	setbuf(stdout,NULL);
	printf("Enter the operation to perform: 1 - addition, 2 - substraction,3 - multiply, 4 - divide");
	scanf("%d",&op);
	printf("Enter the 2 numbers");
	scanf("%f%f",&num1,&num2);
	if(op == 1){
		result = num1 + num2;
		printf("The sum is %f",result);
	}
	else if(op == 2){
		result = num1 - num2;
		printf("The substaction is %f",result);
	}
	else if(op == 3){
		result = num1 * num2;
		printf("The multiplied result is %f",result);
		}
	else if(op == 4){
		result = num1 / num2;
		printf("The divided result is %f",result);
		}
	else{
		printf("Invalid operation code entered");
	}


	return EXIT_SUCCESS;
}
