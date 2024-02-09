/*
 ============================================================================
 Name        : 043_Matrix.c
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
	int a[3][3],i,j;
	int b[3][3],c[3][3];
	setbuf(stdout,NULL);
	printf("Enter numbers to the first matrix \n"); /* Read numbers */
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);

		}


	}
	printf("Enter the second matrix \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);

		}
	}


	/*Addition starting from here*/

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}



	printf("The sum matrix is \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",c[i][j]);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
