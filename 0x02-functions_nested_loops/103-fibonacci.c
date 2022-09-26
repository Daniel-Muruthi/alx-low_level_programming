#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description - find and print even valued sum terms in the fibonacci sequence
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i, j, limit, count, sum;

	sum = 0;
	limit = 4000000;
	i = 1;
	j = 2;
	while (1)
	{
		sum = i + j;
		if (sum > limit)
			break;
		if ((sum % 2) == 0)
			count = count + sum;
		i = j;
		j = sum;
	}
	printf("%ld\n", count);
	return (0);
}
