/*
 ============================================================================
 Name        : 034_Array.c
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
	int a[100],limit,temp,i,j;
	setbuf(stdout,NULL);
	printf("Enter the limit: ");
	scanf("%d",&limit);
	printf("Enter the values: \n");
	for(i=0;i<limit;i++)
	{
		scanf("%d",&a[i]);
	}




	for(i=0;i<limit-1;i++)
	{
		for(j=i+1;j<limit;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}

	}


	printf("The sorted Array is: ");
	for(i=0;i<limit;i++)
	{
		printf("   %d",a[i]);
	}
	return EXIT_SUCCESS;
}
