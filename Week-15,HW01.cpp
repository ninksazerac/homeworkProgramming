#include <stdio.h>
#include <stdlib.h>
struct patz
{
	int i = 0;
}ez;

void covertBin(int dec)
{
	static int numBin[128];
	while (dec != 0)
	{
		numBin[ez.i] = dec % 2;
		dec /= 2;
		ez.i++;
	}
	for (ez.i; ez.i >= 0; ez.i--)
	{
		printf("%d", numBin[ez.i]);
	}
}

int main()
{
	int numDec;
	printf("Enter positive integer : ");
	scanf_s("%d", &numDec);
	if (numDec > 0 || numDec != NULL)
	{
		covertBin(numDec);
	}

	return 0;
}
