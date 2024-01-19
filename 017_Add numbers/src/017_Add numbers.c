/*
 ============================================================================
 Name        : 017_Add.c
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
	int i,sum=0,num;
	setbuf(stdout,NULL);
	printf("Enter the number ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		sum=sum+i;

	}
	printf("Sum is %d ",sum);
	return EXIT_SUCCESS;
}
