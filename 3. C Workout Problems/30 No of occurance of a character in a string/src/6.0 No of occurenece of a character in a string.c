/*
 ============================================================================
 Name        : 0.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int i,j, len,count=0,countarray[50];
	setbuf(stdout,NULL);
	char string[50];
	printf("Enter the string: ");
	scanf("%s",string);
	printf("%s",string);

	len = strlen(string);

	for(i=0;i<len;i++){
		count=1;
		for(j=i+1;j<len;j++){
			if(string[i]==string[j]){
				count++;
				string[j]=-9; //Set string[j] to -9 or any negative no to avoid printing visited character
			}
		}
		if(string[i]!=-9)
			countarray[i]=count;
		else
			countarray[i]=0;
	}

	for(i=0;i<len;i++){
		if(string[i]!=-9)
			printf("\n%c occurs %d times ",string[i],countarray[i]);
	}


	return EXIT_SUCCESS;
}
