#include<stdio.h>
int main()
{
	int i,j,d,sp;
	scanf_s("%d",&j);
	for(i=1;i<=j-1;i++)
	{
		for(d=1;d<=i;d++){
			printf("*");
		}
		for(sp=1;sp<=2*(j-i);sp++){
			printf(" ");
			}
		putchar('\b');
		for(d=i;d>=1;d--){
			printf("*");
		}
		putchar('\n');	
	}
	for(i=j;i>=1;i--)
	{
		for(d=1;d<=i;d++){
		printf("*");
		}	
		for(sp=1;sp<=2*(j-i);sp++){
		printf(" ");
		}	
		putchar('\b');
		for(d=i;d>=1;d--){
		printf("*");
		}
		putchar('\n');			
	}
	return 0;
}
