/*
 ============================================================================
 Name        : .c
 Author      : Aju
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

//Aju learning the below code trialed and errored..
/*
#include <stdio.h>
#include <stdlib.h>
void getArray(int a[],int n1);
void displayArray(int a1[],int n);
int main(void)
{
	setbuf(stdout,NULL);
	int n,a[100]={}, b[100]={4,6,8}, c[100];
	printf("The array size \n");
		 scanf("%d",&n);
	getArray(a,n);
	//getArray(b,n);
	getArray(c,n);
	displayArray(a,n);
	displayArray(b,n);
	displayArray(c,n);
	return EXIT_SUCCESS;
}

 void getArray(int ab[],int n1)
 {
	 int i;
	 printf("Enter the values of array  \n");
	 for(i=0;i<n1;i++)
	 {
		 scanf(" %d",&ab[i]);
	 }
 }
 void displayArray(int a1[],int n)
 {
	 printf("The values of array is \n");
	 for(int i=0;i<n;i++)
	 	 {
	 		 printf(" %d",a1[i]);
	 	 }
 }

*/

// program below to upload

#include <stdio.h>
#include <stdlib.h>
void getArray(int array[],int n1);
void displayArray(int a1[],int n);
int main(void)
{
	setbuf(stdout,NULL);
	int size,a[100], b[100];
	printf("Enter the array size: \n");
	scanf("%d",&size);
	getArray(a,size);
	getArray(b,size);
	displayArray(a,size);
	displayArray(b,size);
	return EXIT_SUCCESS;
}

 void getArray(int array[],int n)
 {
	 int i;
	 printf("Enter the values of array  \n");
	 for(i=0;i<n;i++)
	 {
		 scanf(" %d",&array[i]);
	 }
 }
 void displayArray(int arr[],int n2)
 {
	 printf("The values of array is \n");
	 for(int i=0;i<n2;i++)
	 	 {
	 		 printf(" %d",arr[i]);
	 	 }
	 printf("\n");
 }
