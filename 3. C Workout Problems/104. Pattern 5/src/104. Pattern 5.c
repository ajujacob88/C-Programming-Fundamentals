/*
 ============================================================================
 Name        : .c
 Author      : Aju
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,limit,flag=2;
	setbuf(stdout,NULL);
	printf("Enter the limit");
	scanf("%d",&limit);
	for(i=1;i<=limit;i++){
		if(flag%i==0){
			for(j=0;j<4;j++){
				printf("* ");
			}
			printf("\n");
			flag++;
		}



		else{
			printf("*     *");
			printf("\n");
			flag++;
		}
	}

	return EXIT_SUCCESS;
}
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,limit,k=1;
	setbuf(stdout,NULL);
	printf("Enter the limit");
	scanf("%d",&limit);
	for(i=1;i<=limit;i++){
		if(k%3==0){
			printf("*");
			printf("\n");

		}

		else{

		}
	}

	return EXIT_SUCCESS;
}
