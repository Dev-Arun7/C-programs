/*
 ============================================================================
 Name        : 010_Greatest.c
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
	int a,b;
	setbuf(stdout, NULL);
	printf("Enter 2 numbers  \n");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("%d is the large number",a);
	}
	else
	{
		printf("%d is the large number",b);
	}
	return EXIT_SUCCESS;
}
