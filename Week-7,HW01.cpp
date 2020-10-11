#include <stdio.h>
int main()
{
	int m,n;
	int matrixA[100][100],matrixB[100][100];
	scanf_s("%i", &m);
	scanf_s("%i", &n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf_s("%i", &matrixA[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf_s("%i", &matrixB[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf_s("%i ", matrixA[i][j] + matrixB[i][j]);
		}
		printf("\n");
	}
	
}
