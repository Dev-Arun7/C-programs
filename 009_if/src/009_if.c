/*
 ============================================================================
 Name        : 009_if.c
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
	int a;
	setbuf(stdout, NULL);
	printf("Enter a number \n");
	scanf("%d",&a);
	if(a<0)
		{
		printf("The number is negative");
		}
	else
		{
		printf("The number is positive");
		}

	return EXIT_SUCCESS;
}
