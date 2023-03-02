/*
 ============================================================================
 Name        : ASSIGNMENT.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


/* In C you can pass single-dimensional arrays in two ways.
 * You can either pass it directly to a function.
 * Or you can also pass it as a pointer to the array.
 *
 *
 * How to return a single dimensional array from the function?
In C you cannot return an array directly from a function.
But that does not impose a restriction on the C language.
There are two ways to return an array indirectly from a function.
Return pointer pointing at array from a function
Pass the returned array as a parameter in C

Pass the returned array as a parameter in C
Arrays in C are passed by reference, hence any changes made to an array passed as an argument persists after the function.
So, you can accept the output array you need to return, as a parameter to the function.

https://dotnettutorials.net/lesson/functions-using-array-in-c/

The code here is copied from brocamp telegram group,posted by brocamp faculty and is working...


 */

#include <stdio.h>
#include <stdlib.h>

void getArray(int[],int);
void displayArray(int[],int);

// Main method
int main() {
    int arr[10],limit;
	setbuf(stdout,NULL);
	printf("Program should accept an array and display it on the console using functions. Program should contain 3 functions including main() function");

    printf("\nEnter limit : ");
    scanf("%d",&limit);
    getArray(arr,limit);
    displayArray(arr,limit);
    return 0;
}

// GetArray method
void getArray(int arr[5],int limit){
    int i;
    printf("Enter numbers : \n");
    for(i=0;i<limit;i++){
        scanf("%d",&arr[i]);
    }
}

// DisplayArray method
void displayArray(int arr[5],int limit){
    int i;
    printf("Entered numbers are : \n");
    for(i=0;i<limit;i++){
        printf("%d \t",arr[i]);
    }
}


// Another way

#include <stdio.h>
#include <stdlib.h>
void getArray(int a[],int n1);
void displayArray(int a1[],int n);
int main(void)
{
	setbuf(stdout,NULL);
	int n,a[100], b[100], c[100],d[100];
	printf("The array size \n");
		 scanf("%d",&n);
	getArray(a,n);
	getArray(b,n);
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


// another checking

#include <stdio.h>
#include <stdlib.h>
void getArray(int a[],int n1);
void displayArray(int a1[],int n);
int main(void)
{
	setbuf(stdout,NULL);
	int n,a[100]={}, b[100]={4,6,8}, c[100],d[100];
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




