/*
 ============================================================================
 Name        : 039_String_1.c
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
	char name1[100];
	char name2[100];
	char name3[]="ARUN";
	setbuf(stdout,NULL);
	printf("Enter the character to the string 1");
	scanf("%s",name1);
	printf("Enter the character to the string 2");
	gets(name2);


	printf("%s",name1);
	printf("%s",name2);
	printf("%s",name3);

	return EXIT_SUCCESS;
}
