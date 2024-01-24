/*
 ============================================================================
 Name        : 030A_Search.c
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
	int limit, a[100],i,SearchKey,flag=0,result[10],j=0;
	setbuf(stdout,NULL);
	printf("Enter the limit \n");
	scanf("%d",&limit);
	printf("Enter the values to the array \n");
	for(i=0;i<limit;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the Search Key \n");
	scanf("%d",&SearchKey);



    //searching
	for(i=0;i<limit;i++)
	{
		if(a[i]==SearchKey)
		{
			flag=1;
			result[j]=i+1;
			j++;
		}
	}
	if(flag==1)
	{
		printf("Search key is found at position :");
		for(i=0;i<j;i++)
		{
			printf("%d \t",result[i]);
		}

	}
	else
		{
			printf("Search Key is't found");
		}
	return EXIT_SUCCESS;
}
