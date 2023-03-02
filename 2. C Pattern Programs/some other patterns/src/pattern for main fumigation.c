/*
 ============================================================================
 Name        : pattern.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int limit,i,j,k,f=1,g=1,flag,m;
	char x;
	setbuf(stdout,NULL);

	printf("\n Pattern 1 \n\n");

	for(i=1;i<=7;i++){
		for(j=1;j<=7;j++){

			if((j==1||j==7||i==1||i==7)||(i==3||i==5||j==3||j==5)&&(j>=3 && j<=5)&&(i>=3 && i<=5)){
				printf("*");
			}


			else{
				printf(" ");
			}
		}
		printf("\n");
	}

	printf("\n Pattern 2 \n\n");

	for(i=1;i<=4;i++){
		x='A';
		x=x+i;

		for(j=1;j<=4;j++){
			if(j<=i)
			{
				x--;
				printf("%c",x);

			}
			else
				printf(" ");


		}
		printf("\n");

	}


	printf("\n Pattern 2 mysirg method correct method \n\n");

	for(i=1;i<=4;i++){
		k=64+i;   //ASCI value of A is 65,B is 66 and so on..

		for(j=1;j<=4;j++){
			if(j<=i)
			{

				printf("%c",k);
				k--;

			}
			else
				printf(" ");


		}
		printf("\n");

	}

	printf("\n another pattern 3 \n\n");

		k=0;
		for(i=1;i<=4;i++){
			k=i;
			for(j=1;j<=7;j++){
				if(j>=5-i &&j<=3+i){
					printf("%d",k);

					if(j<4)
						k--;
					else
						k++;

				}
				else
					printf(" ");


			}
			printf("\n");

		}


		printf("\n another pattern 4 \n\n");


			for(i=1;i<=6;i++){
				for(j=1;j<=11;j++){
					if(j==7-i||j==5+i||(i==6&&j%2!=0))
						printf("*");
					else
						printf(" ");
				}
				printf("\n");
			}


		printf("\n another pattern 5 \n\n");


			for(i=1;i<=6;i++){
				for(j=1;j<=6;j++){
					if(i==1||i==6||j==1||j==6 || j==i || j==7-i)
						printf("* ");
					else
						printf("  ");
				}
				printf("\n");
			}


			printf("\n another pattern 6 \n\n");

			char ch[50]="INDIA";

			for(i=1;i<=5;i++){
				k=0;
				for(j=1;j<=5;j++){
					if(j<=i){
						printf("%c",ch[k]);
						k++;
					}
					else
						printf(" ");
				}
				printf("\n");
			}

			printf("\n another pattern 5 \n\n");


			for(i=1;i<=5;i++){
				for(j=1;j<=9;j++){
					if(j>=i && j<=4+i)
						printf("*");
					else
						printf(" ");
				}
				printf("\n");
			}

			printf("\n another pattern 6 \n\n");


			for(i=1;i<=6;i++){
				for(j=1;j<=6;j++){
					if(i==1 || j==6 || j==i)
						printf("* ");
					else
						printf("  ");
				}
				printf("\n");
			}


			printf("\n another pattern 7 \n\n");


			for(i=1;i<=9;i++){
				for(j=1;j<=9;j++){
					if(i==5 || j==5)
						printf("* ");
					else
						printf("  ");
				}
				printf("\n");
			}


			printf("\n another pattern 8 \n\n");

			k=1;
			for(i=1;i<=5;i++){
				g=i;
				for(j=1;j<=9;j++){
					if(j>=i && j<=10-i && k){
						printf("%d ",g);
						g=g+i;

					}
					else
						printf("  ");

					k=1-k;
				}
				printf("\n");
			}

			printf("\n another pattern 9 \n\n");

			for(i=1;i<=4;i++){
				for(j=1;j<=2*i;j++){
					printf("* ");
				}
				printf("\n");

				if(i==4)
					break;

				for(j=1;j<=i;j++){
					printf("* \n");
				}
			}


			printf("\n another pattern 10 \n\n");

			for(i=1;i<=3;i++){
				for(j=1;j<=i;j++){
					for(k=1;k<=i*2;k++){
						printf("* ");
					}
					printf("\n");
				}


				if(i==3)
					break;

				for(j=1;j<=2;j++){
					printf("* \n");
				}
			}

			printf("\n same pattern other way with less no of for loop \n\n");

			for(i=1;i<=3;i++){
				for(j=1;j<=i*i*2;j++){
					printf("* ");
					if(j%(2*i)==0)
						printf("\n");
				}




				if(i==3)
					break;

				for(j=1;j<=2;j++){
					printf("* \n");
				}
			}

			printf("\n another pattern 10 \n\n");

			k=1;
			for(i=1;i<=3;i++){

				for(j=1;j<=i;j++){
					printf("%d \n",i);
				}

				for(j=1;j<=1+i;j++){
					printf("%d ",k);
					k++;
				}
				printf("\n");

			}

			printf("\n another pattern 11 \n\n");


			for(i=1;i<=3;i++){

				printf("* \n");

				for(j=1;j<=i+1;j++){
					for(k=1;k<=1+i;k++){
						printf("* ");
					}
					printf("\n");
				}


			}

			printf("\n same pattern with less for loop \n\n");


			for(i=1;i<=3;i++){

				printf("* \n");

				for(j=1;j<=(i+1)*(i+1);j++){
						printf("* ");
						if(j%(i+1)==0)
							printf("\n");
				}



			}

			printf("\n another pattern with less for loop \n\n");


			for(i=1;i<=3;i++){

				printf("* \n");

				for(j=1;j<=i*3;j++){
						printf("* ");
						if(j%3==0)
							printf("\n");
				}

			}

			printf("\n another pattern 10 \n\n");

			m=12;
			for(i=1;i<=7;i++){


				for(j=m+i;j>=i;j--){
					printf("* ");

				}
				printf("\n");

				for(j=1;j<=3;j++)
					printf("*\n");

				m=m-2;

			}

			printf("\n same pattern other method \n\n");


			for(i=7;i>=1;i--){

				for(j=1;j<=2*i-1;j++){
					printf("* ");

				}
				printf("\n");

				for(j=1;j<=3;j++)
					printf("*\n");



			}


			printf("\n other pattern 15 \n\n");


			for(i=1;i<=3;i++){

				for(j=1;j<=i;j++){
					printf("* *\n");
				}

				for(j=1;j<=5*i;j++){
					printf("* ");

				}
				printf("\n");


			}

			printf("\n same pattern using one star \n\n");


			for(i=1;i<=3;i++){

				for(j=1;j<=2*i;j++){
					printf("* ");
					if(j%2==0)
						printf("\n");
				}

				for(j=1;j<=5*i;j++){
					printf("* ");

				}
				printf("\n");
			}



			printf("\n other pattern 16 \n\n");


			for(i=3;i<=5;i++){
				for(j=1;j<=i;j++){
					for(k=1;k<=j;k++){
						printf("* ");
					}
					printf("\n");
				}




			}


	return EXIT_SUCCESS;
}
