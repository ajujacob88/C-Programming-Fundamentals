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
//print 100 numbers
	int i;
	setbuf(stdout,NULL);
	for(i=0;i<=100;i++){
		printf("i = %d\n",i);
	}

//program to print the sum of n numbers
	int x=1, num,result=0;
	printf("Enter the no:\n");
	scanf("%d",&num);
	for(x=1;x<=num;x++){
		result=result+x;
	}
	printf("\nThe sum of integers upto to %d is %d",num,result);

// program to print the even numbers upto user entered input
	int y;
	printf("\nThe even numbers upto %d are ",num);
	for(y=2;y<=num;y++){
		if(y%2==0){
			printf("%d, ",y);
		}
	}

// program to print the even numbers without using if

	int z;
	printf("\nodd nos without using if statement are ");
	for(z=1;z<=num;z+=2){
		printf("%d, ",z);
	}

//program to print prime numbers
	int j,flag=0;
	printf("\nChecking prime no or not: ");
	//for(j=1,k=2;j<=num,k<num;j++,k++){
	for(j=2;j<num;j++){
		if(num%j == 0){
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("\nIts not a prime no");
	}
	else{
		printf("\nIts a prime no");
	}


	return EXIT_SUCCESS;
}
