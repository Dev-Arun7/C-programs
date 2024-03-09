//============================================================================
// Name        : 050_Pattern.cpp
// Author      : Arun
// Version     :
// Copyright   : Arun Balakrishnan
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	int n,i,j;
	setbuf(stdout,NULL);
	printf("Enter the size ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			printf("  ");
			usleep(50000);
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
			usleep(50000);
		}
		printf("\n");
	}

	return 0;
}
