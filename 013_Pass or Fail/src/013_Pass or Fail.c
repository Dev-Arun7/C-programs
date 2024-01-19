/*
 ============================================================================
 Name        : 013_Pass.c
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
	float mark;
	setbuf(stdout,NULL);
	printf("Enter your mark ");
	scanf("%f",&mark);
	if(mark>50)
	{
		printf("You're passed");
	}
	else
	{
		printf("You're failed...!");
	}
	return EXIT_SUCCESS;
}
