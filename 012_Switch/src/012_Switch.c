/*
 ============================================================================
 Name        : 012_Switch.c
 Author      : Arun
 Version     :
 Copyright   : Arun Balakrishnan
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int choice;
	setbuf(stdout, NULL);
	printf("1 Porotta \n2 Biriyani \n3 Fried Rice \n4 Manthi \n Enter your choice ");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
		printf("You're selected Porotta");
		break;
	case 2:
		printf("You're selected Biriyani");
		break;
	case 3:
		printf("You're selected Fried Rice");
		break;
	case 4:
		printf("You're selected Manthi");
		break;
	default:
		printf("Fool...!");
		break;
	}
	return EXIT_SUCCESS;
}
