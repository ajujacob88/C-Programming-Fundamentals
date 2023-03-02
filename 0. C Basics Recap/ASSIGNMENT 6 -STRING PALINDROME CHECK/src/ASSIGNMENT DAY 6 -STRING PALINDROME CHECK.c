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
#include <string.h>


// 1.	Write a program to identify whether a string is a palindrome or not

int main(void) {
	char word[20]={};
	int n,i,j,flag=0;
	setbuf(stdout,NULL);

	printf("1. Program to identify whether a string is a palindrome or not\n");
	printf("Enter a string:\n");
	scanf("%s",word);
	n=strlen(word);
	//printf("%d",n);
	for(i=0,j=n-1;i<n && j>=0;i++,j--){
		if(word[i]!= word[j]){
			flag++;
			break;
		}
	}
/*
	printf("\nAnother way is given below");
	for(i=0;i<n;i++){
		if(word[i]!=word[n-1-i]){
			flag++;
			break;
		}
	}
*/


	if(flag==0){
		printf("The entered string is palindrome\n");
	}
	else{
		printf("The entered string is not palindrome\n");
	}



	return EXIT_SUCCESS;
}







