#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int h[100][7];
	int i, j, sum,n;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j=0;j<7;j++)
		{
			scanf("%d", &h[i][j]);
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 7; j++)
		{
			printf("%d\t", h[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < n; i++)
	{
		sum = 0;
		for (j = 0; j < 7; j++)
		{
			sum += h[i][j];
		}
		printf("\nsum hours of no.%d is %d", i + 1, sum);
	}
	return 0;
}