/*
 ============================================================================
 Name        : .c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,k,flag,z;

	printf("Pattern 1\n");
	k=1;
	for(i=1;i<=7;i++){
		for(j=1;j<=4;j++){
			if(j<=k){
				printf("%d",k+2);
			}
			else
				printf(" ");
		}
		printf("\n");
		if(i<=3)
			k++;
		else
			k--;

	}


	printf("Pattern 2\n\n");
	k=1;
	for(i=1;i<=8;i++){
		for(j=1;j<=7;j++){
			if(j<=2*k-1)
				(j%2==0)?printf("*"):printf("%d",k);
			else
				printf(" ");
		}
		printf("\n");
		if(i<=3)
			k++;
		else if(i>=5)
			k--;

	}

	printf("Pattern 3\n\n");
	k=1;
	z=1;
	for(i=1;i<=8;i++){
		for(j=1;j<=7;j++){
			if(j<=2*k-1)
				if(j%2==0)
					printf("*");
				else{
					printf("%d",z);
					z++;
				}
			else
				printf(" ");
		}
		printf("\n");
		if(i<=3)
			k++;

		else if(i==4)
			z=7;
		else if(i>4)
		{
		z=4;
		k--;
		}
	}

	printf("Pattern 4\n\n");

	k=1;
	for(i=1;i<=7;i++){
		z=1;
		for(j=1;j<=7;j++){

			if(j<=2*k-1){
				(j==1||j==2*k-1)?printf("* "):printf("%d ",z);

			}

			else
				printf("  ");
		}
		printf("\n");
		if(i<=3)
			k++;
		else
			k--;



	}


	return EXIT_SUCCESS;
}
