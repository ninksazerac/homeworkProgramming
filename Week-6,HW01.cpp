#include<stdio.h>
int main()
{
	int c,r,null,num1;
	scanf_s("%d",&num1);
	for (r=0 ; r<num1 ; r++)
		{
		for (c=r ; c<=num1-1 ; c++)
		{
			if (c<num1-1)
			{
			printf (" ");
			}
			else
			{
			for (null=num1-r ; null<=num1 ; null++)
				{
				printf ("*");
				}
			}
		}
	printf ("\n"); 
		}	
	return 0;
}

