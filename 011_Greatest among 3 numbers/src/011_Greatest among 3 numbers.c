/*
 ============================================================================
 Name        : 011_Greatest.c
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
	int a,b,c;
	setbuf(stdout, NULL);
	printf("Enter 3 numbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("%d is the largest number",a);
		}
		else
		{
			printf("%d is the largest number",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("%d is the largest number",b);
		}
		else
		{
			printf("%d is the largest number",c);
		}
	}


	return EXIT_SUCCESS;
}
