/*
 ============================================================================
 Name        : 044_Function.c
 Author      : Arun
 Version     :
 Copyright   : Arun Balakrishnan
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int sum();
int main(void)
{
	int c;
	setbuf(stdout,NULL);
	c=sum();
	printf("The result is %d",c);
	return EXIT_SUCCESS;
}
int sum()
{
	int a,b,result;
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	result=a+b;
	return result;
}
