/*
 ============================================================================
 Name        : 038_Multiple.c
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
	int limit,i,flag=0,a[100],searchkey,data[100],j=0;
	setbuf(stdout,NULL);


	printf("Enter the array limit:  ");
	scanf("%d",&limit);
	printf("Enter the values to the array:\n");
	for(i=0;i<limit;i++)
	{
		scanf("%d",&a[i]);
	}



	printf("Enter the search key:  ");
	scanf("%d",&searchkey);


	//Searching for the search key
	for(i=0;i<limit;i++)
	{
		if(searchkey==a[i])
		{
			flag=1;
			if(flag==1)
			{

				data[j]=i+1;
				flag=0;
				j++;

			}

		}



	}
	if(data[0]==0)
	{
		printf("No match.......!");
	}
	else
	{
		printf("Search key is found on ");
		for(i=0;i<j;i++)
		{
			printf("%d\t",data[i]);
		}
	}

	return EXIT_SUCCESS;
}
