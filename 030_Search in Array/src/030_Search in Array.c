/*
 ============================================================================
 Name        : 030_Search.c
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
	int a[100],limit,i,searchKey,flag=0;
	setbuf(stdout,NULL);

	printf("Enter the array size \n");
	scanf("%d",&limit);
	printf("Enter the values to the Array \n");
	for(i=0;i<limit;i++)
	{
		scanf("%d",&a[i]);
	}


	printf("Enter search key \n");
	scanf("%d",&searchKey);
	for(i=0;i<limit;i++)
	{
		if(searchKey==a[i])
		{
		flag=1;
		break;
		}
	}


	if(flag==1)
	{
		printf("%d is found on %d ",searchKey,i+1);
	}
	else
	{
		printf("No Match...!");
	}
	return EXIT_SUCCESS;
}
