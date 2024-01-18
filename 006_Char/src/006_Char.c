/*
 ============================================================================
 Name        : 006_Char.c
 Author      : Arun
 Version     :
 Copyright   : �Arun Balakrishnan
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char a[20];
	setbuf(stdout, NULL);
	printf("Enter your name\n" );
	scanf("%s",&a);
	printf("hello  %s",a);

	return EXIT_SUCCESS;
}
