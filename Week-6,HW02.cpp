#include<stdio.h>
int main()
{
	int r,c,null,num1;
	scanf_s("%d",&num1);
	for (r=0 ; r<num1 ; r++)
	{
		for (c=num1-r ; c<=num1 ; c++)
		{
			if (c<num1)
			{
			printf(" ");
			}
			else
			{
			for (null=r ; null<num1 ; null++)
				{
				printf("*");
				}
			}
		}
		printf("\n");
	}
	return 0;
}
