/*
 ============================================================================
 Name        : 031_Selection.c
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
	int limit,temp,i,j,a[100];
	setbuf(stdout,NULL);
	printf("Enter the Array size: \n");
	scanf("%d",&limit);
	printf("Enter the values \n");
	for(i=0;i<limit;i++)
	{
		scanf("%d",&a[i]);
	}



	for(i=0;i<limit-1;i++)
	{
		for(j=i+1;j<limit;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}

		}
	}



	printf("Sorted data is\n");
	for(i=0;i<limit;i++)
	{
		printf("%d \n",a[i]);
		usleep(500000);
	}

	return EXIT_SUCCESS;
}
