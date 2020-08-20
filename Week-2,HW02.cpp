#include<stdio.h>
int main()
{
	int x;
	scanf_s("%d",&x);
	if(x>0)
	{
		printf("more than zero");
	}
	if(x<=0)
	{
		printf("less or equal zero");
	}
	return 0;
}
