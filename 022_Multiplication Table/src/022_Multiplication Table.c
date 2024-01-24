/*
 ============================================================================
 Name        : 022_Multiplication.c
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
	int num,i,mul;
	setbuf(stdout,NULL);
	printf("Enter the number ");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		mul=i*num;
		printf("%d x %d = %d \n",i,num,mul);
		usleep(100000);
	}
	return EXIT_SUCCESS;
}
