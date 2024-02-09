/*
 ============================================================================
 Name        : 036_Stirng_1.c
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
	char name[25];
	setbuf(stdout,NULL);
	printf("Enter the text: \n");
	gets(name);
	printf("Entered text is %s",name);
	return EXIT_SUCCESS;
}
