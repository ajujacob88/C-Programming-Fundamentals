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
	int i,j,limit,flag=0,k=1,seq=0;
	setbuf(stdout,NULL);
	printf("Enter limit: ");
	scanf("%d",&limit);


	for(i=1;i<=limit;i++){


		for(j=1;j<=2*i;j++){

			if(seq%2!=0){
				seq+=3;


				printf("%d ",seq);
			}
			else{
				seq++;
				printf("%d ",seq);

			}

		}
		printf("\n");


		if(i==limit){
			break;
		}

		for(j=1;j<=3*k;j++){
			if(seq%2!=0){
				seq+=3;
				//seq++;

				printf("%d \n",seq);
			}
			else{
				seq++;
				printf("%d \n",seq);

			}
		}
		k++;
	}

	return EXIT_SUCCESS;
}
