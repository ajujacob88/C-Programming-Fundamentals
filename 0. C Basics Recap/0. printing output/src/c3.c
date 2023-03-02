/*
 ============================================================================
 Name        : c3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int a;
	float b;
	char c;
	setbuf(stdout, NULL);
	//fflush( stdout );
	//setvbuf(stdout, NULL, _IONBF, 0);
	printf("input no");
	scanf("%d",&a);
	printf("input float no");
	scanf("%f",&b);
	printf("input a char:");
	scanf(" %c",&c);
	printf("decimal is %d \n",a);
	printf("float is %f \n", b);
	printf("char is %c and a space is required before percent in scanf then only it works \n",c);
	return EXIT_SUCCESS;
}
