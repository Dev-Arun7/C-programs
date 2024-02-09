/*
 ============================================================================
 Name        : 035_String.c
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
	char name[100];
	setbuf(stdout,NULL);
	printf("Enter the text to the string: \n");
	scanf("%s",name);
	printf("Entered string is: %s",name);

	return EXIT_SUCCESS;
}
