/*
 ============================================================================
 Name        : 032_Swap.c
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
	int a1[100],a2[100],limit,i,j,temp;
	setbuf(stdout,NULL);
	printf("Enter the limit for Arrays  \n");
	scanf("%d",&limit);
	printf("Enter the values to the Array 1 \n");
	for(i=0;i<limit;i++)
	{
		scanf("%d",&a1[i]);
	}
	printf("Enter the values to the Array 2 \n");
	for(i=0;i<limit;i++)
	{
		scanf("%d",&a2[i]);
	}


	//Swapping

	for(i=0;i<limit;i++)
	{
		temp=a1[i];
			a1[i]=a2[i];
			a2[i]=temp;
	}



	printf("Array 1 is: ");
	for(i=0;i<limit;i++)
	{
		printf("\t %d",a1[i]);
	}
	printf("\nArray 2 is: ");
	for(i=0;i<limit;i++)
	{
		printf("\t %d",a2[i]);
	}
	return EXIT_SUCCESS;
}
