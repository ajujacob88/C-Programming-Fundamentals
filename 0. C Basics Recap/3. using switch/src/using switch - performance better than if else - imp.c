/*
 ============================================================================
 Name        : using.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

//Performance wise switch is better than else if, because in switch the cases are executed directly that cparticular case,,it will not check every case..
// so switch is faster than if else, because in if else evvery else is ecexuted, but in switch only the correct case is executed.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int choice;
	setbuf(stdout,NULL);
	printf("Available menu: \n 1 - Porotta \n 2 - chappathi \n 3 - Biriyani \n 4 - Mandhi \nPress the respective choice number:");
	scanf("%d",&choice);
	switch(choice){
	case 1:
		printf("you have selected porotta");
		break;
	case 2:
		printf("you have selected chappathi");
		break;
	case 3:
		printf("ypu have selected biriyani");
		break;
	case 4:
		printf("you have selected mandhi");
		break;
	default:
		printf("Entered wrong selection");
		break;
	}


// char and string also can be used
		char x;
		printf("\nAvailable menu: \n P - Porotta \n C - chappathi \n B - Biriyani \n M - Mandhi \nPress the respective choice number:\n");
		scanf(" %c",&x);   //space before % is must.
		switch(x){
		case 'P':
			printf("you have selected porotta");
			break;
		case 'C':
			printf("you have selected chappathi");
			break;
		case 'B':
			printf("ypu have selected biriyani");
			break;
		case 'M':
			printf("you have selected mandhi");
			break;
		default:
			printf("Entered wrong selection");
			break;
		}

	return EXIT_SUCCESS;
}
