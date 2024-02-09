/*
 ============================================================================
 Name        : 039_Search.c
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
	int a[3][3],i,j,flag=0;
	int searchkey;
	setbuf(stdout,NULL);
	printf("Enter the values to the Array: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	printf("Enter the Search Key");
	scanf("%d",&searchkey);


	//Searching for the search key
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(searchkey==a[i][j])
			{
				flag=1;
				break;

			}

		}
		if(flag==1)
		{
			break;
		}

	}


	if(flag==1)
	{
		printf("Searchkey is found on position: %d/%d",i+1,j+1);
	}
	else
	{
		printf("No match found.....!");
	}


	return EXIT_SUCCESS;
}
