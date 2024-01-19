/*
 ============================================================================
 Name        : 014_Exam.c
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
	float m;
	setbuf(stdout,NULL);
	printf("Enter your mark ");
	scanf("%f",&m);
	if(m>90)
	{
		printf("You got A Grade");
	}
	else if(m>80)
	{
		printf("Your got B Grade");
	}
	else if(m>70)
	{
		printf("You got C Grade");
	}
	else if(m>60)
	{
		printf("You got D Grade");
	}
	else if(m>50)
	{
		printf("You got E Grade");

	}
	else
	{
		printf("You're failed...!");
	}
	return EXIT_SUCCESS;
}
