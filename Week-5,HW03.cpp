#include<stdio.h>
int main()
{
	int i,j,N;
	scanf_s("%d",&N);
	for(i=0;i<N;i++)
	{
		for(j=0;j<N-i;j++)
		{
				printf("*");
		}
		printf("\n");
	}
	return 0;
}
