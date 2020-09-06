#include<stdio.h>
int main()
{
	int N,i;
	printf("Enter number : ");
	scanf_s("%d",&N);
	printf("Factoring Result : ");
	for(i=2;i<=N;i++)
	{
		if(N%i == 0)
		{
			printf("%d",i);
			N = N/i;
			i = 1;
				if(i<N)
				{
					printf(" x ");
				}
		}	
	}
	return 0;
}
