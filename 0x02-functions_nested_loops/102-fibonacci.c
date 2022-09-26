#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description - Prints first 50 fibonnacci numbers starting with 1, 2
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, sum, count;

	for (count = 0; count <= 50; count++)
	{
		i = 1;
		j = 2;
		sum = 0;
		while (count <= 50)
		{
			k = i + j;
			sum = sum + k;
			printf("%d, %d, %d", i, j, sum);
			if (count == 50)
				continue;
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
