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
	int limit,i,j,k,f=1,g=1,flag;
	setbuf(stdout,NULL);

	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(j<=i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}


	printf("\n another pattern \n\n");

	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(j>=6-i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}

	printf("\n another pattern \n\n");


	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(j>=i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}

	printf("\n another pattern 5 \n\n");

	for(i=1;i<=5;i++){
		for(j=1;j<=9;j++){

			if(j>=6-i&&j<=4+i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}

	printf("\n another pattern 6 \n\n");


	for(i=1;i<=5;i++){
		k=1;
		for(j=1;j<=9;j++){
			if(j>=6-i && j<=4+i && k){
				printf("*");
				k=0;
			}
			else{
				printf(" ");
				k=1;
			}
		}
		printf("\n");
	}

	printf("\n another pattern 6A \n\n");


	for(i=1;i<=5;i++){
		k=1, f=1;
		for(j=1;j<=9;j++){
			if(j>=6-i && j<=4+i && k){
				printf("%d",f);
				k=0;

				if(j<5)
					f++;
				else
					f--;
			}
			else{
				printf(" ");
				k=1;
			}
		}
		printf("\n");
	}




	printf("\n another pattern 7 \n\n");

	for(i=1;i<=5;i++){
		for(j=1;j<=9;j++){
			if(j<=6-i||j>=4+i)
				printf("*");
			else
				printf(" ");

		}
		printf("\n");
	}

	printf("\n another pattern 8 \n\n");


	for(i=1;i<=4;i++){
		k=1;
		for(j=1;j<=7;j++){
			if(j>=5-i && j<=3+i){
				printf("%d",k);

				j<4?k++:k--;  //another condition operator alternate to if else,,, use any one

			//	if(j<4)
			//		k++;
			//	else
			//		k--;
			}
			else
				printf(" ");

		}
		printf("\n");
	}

	printf("\n another pattern 8A \n\n");


	for(i=1;i<=4;i++){
		k='A';
		for(j=1;j<=7;j++){
			if(j>=5-i && j<=3+i){
				printf("%c ",k);

				if(j<4)
					k++;
				else
					k--;
			}
			else
				printf("  ");

		}
		printf("\n");
	}




	printf("\n another pattern 8 \n\n");

	char s;

	for(i=1;i<=4;i++){
		s='A';
		for(j=1;j<=7;j++){
			if(j<=5-i||j>=3+i){
				printf("%c",s);

				if(j<4)
					s++;
				else
					s--;

			}
			else{
				printf(" ");
				if(j==4)
					s--;
			}
		}
		printf("\n");
	}


	printf("\n another pattern 9 \n\n");

	k=1;
	for(i=1;i<=7;i++){
		for(j=1;j<=7;j++){
			if(j>=5-k && j<=3+k){
				printf("*");
			}
			else
				printf(" ");
		}
		printf("\n");
		if(i<4)
			k++;
		else
			k--;
	}

	printf("\n another pattern 10 \n\n");

	k=1;
	for(i=1;i<=7;i++){
		for(j=1;j<=4;j++){
			if(j<=k){
				printf("*");
			}
			else
				printf(" ");
		}
		printf("\n");
		if(i<4)
			k++;
		else
			k--;

	}

	printf("\n another pattern 11 \n\n");


	for(i=1;i<=4;i++){
		for(j=1;j<=7;j++){
			if(j>=i&&j<=8-i)
				printf("*");
			else
				printf(" ");

		}
		printf("\n");
	}

	printf("\n another pattern 12 \n\n");

		k=0;
		for(i=1;i<=4;i++){
			k=i;
			for(j=1;j<=7;j++){
				if(j>=5-i &&j<=3+i){
					printf("%d",k);

					if(j<4)
						k++;
					else
						k--;

				}
				else
					printf(" ");


			}
			printf("\n");

		}

		printf("\n another pattern 13 \n\n");


		for(i=1;i<=7;i++){
			k=7-i;
			for(j=1;j<=7;j++){
				if(j<=8-i){
					printf("%d",k);
					k--;
				}
				else
					printf(" ");
			}
			printf("\n");
		}


		printf("\n another pattern 14 \n\n");

		k=1;
		for(i=1;i<=9;i++){
			f=1;
			for(j=1;j<=5;j++){
				if(j>=6-k){
					printf("%d",f);
					f++;
				}
				else
					printf(" ");

			}
			printf("\n");
			if(i<=4)
				k++;
			else
				k--;

		}

		printf("\n another pattern 16 \n\n");

		for(i=1;i<=7;i++){
			for(j=1;j<=7;j++){
				if(i==j || j==8-i)
					if(i==j)
						printf("\\");
					else
						printf("/");
				else
					printf("*");

			}
			printf("\n");
		}


		printf("\n another pattern 17 my sirg 17\n\n");

		k=1;
		for(i=1;i<=9;i++){
			for(j=1;j<=9;j++){

				if(j<=6-k||j>=4+k)
					printf("*");
				else
					printf(" ");


			}
			printf("\n");
			if(i<=4)
				k++;
			else
				k--;
		}


		printf("ladder logic my\n\n");

		for(i=1;i<6;i++){

			for(j=1;j<=i;j++){
				for(k=1;k<=3*i;k++){
					printf("* ");
				}
				printf("\n");
			}


			for(j=1;j<=3;j++){
				printf("*\n");
			}

		}


		printf("ladder logic my 2\n\n");

		f=1,g=1;
		for(i=1;i<=5;i++){

			for(j=1;j<=5*f;j++){
				printf("*");
			}
			printf("\n");
			f++;
			if(f==3)
				f=1;

			if(i==5)
				break;



			g=g*2;
			for(j=1;j<=g;j++){
				printf("*\n");
			}
		}


		printf("\n VARIETY another pattern 18 \n\n");

		k=1;
		for(i=1;i<=9;i++){
			for(j=1;j<=9;j++){

				if(j<=2*k-1)
					printf("*");
				else
					printf(" ");

			}
			printf("\n");
			if(i<5){
				k++;
			}
			else{
				k--;
			}
		}


		printf("\n VARIETY another pattern 19 \n\n");

		flag =0;
		for(i=0;i<5;i++){

			printf("0 ");
			for(j=1;j<=i;j++){
				printf("%d ",flag*j);

			}
			flag++;
			printf("\n");

		}

		printf("\n Above same using mysirg q 35 \n\n");

		for(i=1;i<=5;i++){
			flag=0;
			for(j=1;j<=5;j++){
				if(j<=i){
					printf("%d ",flag);
					flag = flag+i-1;
				}


			}
			printf("\n");
		}


		printf("\n Above same using mysirg q 35 \n\n");

		for(i=0;i<5;i++){

			for(j=0;j<5;j++){
				if(j<=i)
					printf("%d ",i*j);

			}
					printf("\n");
		}


		printf("\n another pattern 1 \n\n");

		k=1;
		for(i=1;i<=9;i++){
			f=5;
				for(j=1;j<=9;j++){
					if(j==6-k || j==f|| j==4+k || i==5 ){
						printf("*");

					}
					else{
						printf(" ");

					}

				}
				printf("\n");

			if(i<5)
				k++;
			else
				k--;

		}


		printf("\n another pattern 2 \n\n");

		k=1;
		for(i=1;i<=8;i++){
			flag=1;
			for(j=1;j<=7;j++){


				if(j<=2*k-1){

					(flag%2!=0)?printf("%d ",k):printf("* ");
					flag++;
				}
				else{
					printf("  ");
				}
			}
			printf("\n");
			if(i<4)
				k++;
			else if(i>4)
				k--;


		}





}
