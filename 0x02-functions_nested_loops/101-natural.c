#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description - Computes and printd sum of 3 & 5 multiples under 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, sum;

	sum = 0;
	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum = sum + n;
			if (n == 1023)
				printf("%d", sum);
		}
	}
	printf("\n");
	return (0);
}
