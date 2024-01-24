/*
 ============================================================================
 Name        : 029_Addition.c
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
	int limit,i,sum=0,a[100];
	setbuf(stdout,NULL);
	printf("Enter the limit of Array: \n");
	scanf("%d",&limit);
	printf("Enter the values to Array \n");
	for(i=0;i<limit;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<limit;i++)
	{
		sum=sum+a[i];
	}
	printf("Sum is %d",sum);
	return EXIT_SUCCESS;
}
