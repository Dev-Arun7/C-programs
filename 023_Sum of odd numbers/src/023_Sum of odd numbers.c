/*
 ============================================================================
 Name        : 023_Sum.c
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
	puts("Enter the limit ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(i%2==1)
		{
			sum=sum+i;
		}
	}
	printf("Sum is %d",sum);


	return EXIT_SUCCESS;
}
