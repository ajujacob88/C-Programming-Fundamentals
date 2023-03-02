/*
 ============================================================================
 Name        : Maximum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
// Write a program to find maximum and minimum occurring character in a string


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int i,j, len,count=0,countarray[50],max=0,min=99;
	setbuf(stdout,NULL);
	char string[50],maxch,minch;
	printf("Enter the string: ");
	scanf("%s",string);

	len = strlen(string);

	for(i=0;i<len;i++){
		count=1;
		for(j=i+1;j<len;j++){
			if(string[i]==string[j]){
				count++;
				string[j]=-9;

			}
		}
		if (string[i]!=-9){
			if (count>max){
				max = count;
				maxch=string[i];
			}

			else if (count<min){
				min = count;
				minch = string[i];
			}
		}

	}

	printf("\nThe maximum occurred character is %c and it occurred %d times", maxch,max);
	printf("\nThe minimum occurred character is %c and it occurred %d times", minch,min);

	return EXIT_SUCCESS;
}
