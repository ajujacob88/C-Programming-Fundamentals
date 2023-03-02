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
	setbuf(stdout,NULL);

//pattern printing
	int i=0,j=0,n,flag=0;
	printf("Enter no of rows:\n");
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		for(j=0;j<i;j++){
			printf(" * ");
		}
		printf("\n");
	}

//another pattern reverse order
	printf("\n Another pattern reverse order\n\n");
	for (i=1;i<=n;i++){
		for(j=n;j>=i;j--){
			printf(" * ");
		}
		printf("\n");
	}

// reference: https://www.youtube.com/watch?v=xzstcj3Cuso
//another pattern reverse order
	printf("\n Another pattern reverse order- alternate method\n\n");
	for (i=1;i<=n;i++){
		for(j=i;j<=n;j++){
			printf(" * ");
		}
		printf("\n");
	}


//Another pattern
	printf("\n ANother pattern \n\n");
	for(i=1;i<=n;i++){
		for(j=0;j<i;j++){
			printf(" * ");
		}
		printf("\n");
	}
	for(i=1;i<=n;i++){
		for(j=n;j>=i;j--){
			printf(" * ");
		}
		printf("\n");
	}

//Another pattern 2
	printf("\n ANother pattern 2\n\n");
	for(i=1;i<=n;i++){
		for(j=n;j>=i;j--){
			printf("   ");
		}
		for(j=1;j<=i;j++){
			printf(" * ");
		}
		printf("\n");

	}

//Another pattern 3
	printf("Another pattern 3\n\n");
	for(i=0;i<n;i++){
		for(j=n;j>i;j--){
			printf("   ");
		}
		for(j=0;j<=i;j++){
			printf(" * ");
		}
		for(j=1;j<=i;j++){
			printf(" * ");
		}
		printf("\n");
	}
	for(i=0;i<=n;i++){
		for(j=0;j<i;j++){
			printf("   ");
		}
		for(j=n;j>=i;j--){
			printf(" * ");
		}
		for(j=n;j>i;j--){
			printf(" * ");
		}
		printf("\n");
	}

//another pattern 4
	printf("Pattern 4/\n\n");
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			printf(" * ");
		}
		for(j=n;j>i+1;j--){
			printf("   ");
		}
		for(j=n;j>i+1;j--){
			printf("   ");
		}
		for(j=0;j<i;j++){
			printf(" * ");
		}
		printf("\n");
	}
	for(i=1;i<n;i++){
		for(j=n-1;j>i;j--){
			printf(" * ");
		}
		for(j=0;j<i;j++){
			printf("   ");
		}
		for(j=0;j<i;j++){
			printf("   ");
		}
		for(j=n-1;j>i;j--){
			printf(" * ");
		}
		printf("\n");
	}


//another pattern 5
	printf("Pattern 5/\n\n");
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			printf(" * ");
		}
		for(j=n;j>i+1;j--){
			printf("   ");
		}
		flag++;
		if(flag<n){
			printf("   ");
		}
		else if(flag==n){
			printf(" * ");
		}
		for(j=n;j>i+1;j--){
			printf("   ");
		}
		for(j=0;j<i;j++){
			printf(" * ");
		}
		printf("\n");
	}
	for(i=1;i<n;i++){
		for(j=n-1;j>i;j--){
			printf(" * ");
		}
		for(j=0;j<i;j++){
			printf("   ");
		}
		printf("   ");
		for(j=0;j<i;j++){
			printf("   ");
		}
		for(j=n-1;j>i;j--){
			printf(" * ");
		}
		printf("\n");
	}


//newpattern 6

	printf("\nNew pattern 6\n\n");
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			printf("   ");
		}
		for(j=n;j>i;j--){
			printf(" * ");
		}
		for(j=n-1;j>i;j--){
			printf(" * ");
		}
		printf("\n");
	}

	for(i=1;i<n;i++){
		for(j=n;j>i;j--){
			printf("   ");
		}
		for(j=0;j<=i;j++){
			printf(" * ");
		}
		for(j=1;j<=i;j++){
			printf(" * ");
		}
		printf("\n");
	}























	return EXIT_SUCCESS;
}
