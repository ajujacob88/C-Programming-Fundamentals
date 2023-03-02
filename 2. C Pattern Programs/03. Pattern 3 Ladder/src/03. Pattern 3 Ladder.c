/*
 ============================================================================
 Name        : .c
 Author      : Aju
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,i,j,k,f=1;
	setbuf(stdout,NULL);
	printf("Enter limit: ");
	scanf("%d",&limit);

	for(i=1;i<limit;i++){

		if(i==1)
			printf("*\n");

		for(j=1;j<=i;j++){
			for(k=1;k<=i;k++){
				printf("* ");
			}
			printf("\n");
		}

		for(j=1;j<=3*i;j++){
			printf("* ");
		}
		printf("\n");
	}
}








/* Another method
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,i,j,k,m=1;
	setbuf(stdout,NULL);
	printf("Enter limit");
	scanf("%d",&limit);

	for(i=0;i<limit;i++){
		if(i==0)
			printf("* ");

		for(j=0;j<=3*i-1;j++){
			printf("* ");
		}
		printf("\n");

		if(i==limit-1)
			break;

		for(j=0;j<=m-1;j++){
			for(k=0;k<=m-1;k++){
				printf("* ");
			}
			printf("\n");
		}
		m++;
	}




}
*/
