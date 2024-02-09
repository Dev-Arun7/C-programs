/*
 ============================================================================
 Name        : 033_Even.c
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
	int a[100],out[100],limit,i,j=0,flag;
	setbuf(stdout,NULL);
	printf("Enter the limit: ");
	scanf("%d",&limit);
	printf("Enter the values \n");
	for(i=0;i<limit;i++)
	{
		scanf("%d",&a[i]);
	}



	for(i=0;i<limit;i++)
	{
			if(a[i]%2==0)
			{
				flag=flag+1;
				out[j]=a[i];
				j=++j;
			}
	}


	if(flag>0)
				{
					printf("There's %d even numbers in the array \n",flag);
					printf("The numbers are:  ");
					for(i=0;i<j;i++)
					{
						printf("%d, ",out[i]);
					}
				}
	else
	{
		printf("No even numbers are found.");
	}
	return EXIT_SUCCESS;
}
