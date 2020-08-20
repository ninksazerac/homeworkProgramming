#include<stdio.h>
int main()
{
	char x;
	scanf_s("%c",&x);
	char a='a',e='e',i='i',o='o',u='u';
	if(x==a||x==e||x==i||x==o||x==u)
	{
		printf("There is vowel");
	}
	else
	{
		printf("There is not vowel");
	}
	return 0;
}
