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
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(j<=i)
				printf("%d ",j);
			else
				printf("  ");

		}
		printf("\n");
	}

	printf("\nPattern 2\n\n");
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(j<=6-i)
				printf("%d ",j);
			else
				printf("  ");

		}
		printf("\n");
	}

	printf("\nPattern 3\n\n");
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(j==1 || j==i || i==5)
				printf("%d ",j);
			else
				printf("  ");

		}
		printf("\n");
	}

	printf("\nPattern 4\n\n");
	for(i=1;i<=5;i++){
		k=i;
		for(j=1;j<=9;j++){
			if(j>=6-i && j<=4+i){
				printf("%d ",k);

				if(j<=4)
					k++;
				else
					k--;
			}
			else
				printf("  ");


		}
		printf("\n");
	}

	printf("\nPattern 5\n\n");
	for(i=1;i<=5;i++){
		k=1;
		flag=1;
		z=2;
		for(j=1;j<=9;j++){

			if(j==6-i || j==4+i ){
				printf("%d ",k);
				k=i;
			}
			else if (i==5){
				if(flag%2==0){
					printf("%d ",z);
					z++;

				}
				else{
					printf("  ");
				}
				flag++;


			}
			else
				printf("  ");


		}
		printf("\n");
	}



/*
	printf("\nPattern 5a\n\n");
	for(i=1;i<=5;i++){
		k=1;

		for(j=1;j<=9;j++){
			flag=2;
			if(j==6-i || j==4+i || (i==5 && flag%2==0)){
				printf("%d ",k);
				k++;
				flag++;


			}
			else
				printf("  ");


		}
		printf("\n");
	}
*/

	printf("\nPattern 6\n\n");

	for(i=1;i<=5;i++){
		k=i;
		for(j=1;j<=5;j++){
			if(j==1 || j==6-i || i==1 ){
				printf("%d ",k);

			}
			else
				printf("  ");
			k++;
		}
		printf("\n");
	}


	return EXIT_SUCCESS;
}
