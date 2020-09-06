#include<stdio.h>
int main()
{
	int N;
	int i,j;
	scanf_s("%d",&N);
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if((i==0&&j<N) || (j==0&&i<N) || (i==N-1&&j<N) || (j==N-1&&i<N))
			{
				printf("*");
			}
			else
			{
			printf(" ");	
			}
		}
		printf("\n");
	}
	return 0;
}
