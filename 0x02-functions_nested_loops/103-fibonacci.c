#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description - find and print even valued sum terms in the fibonacci sequence
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long i, j, count, sum;

	sum = 0;
	i = 0;
	j = 1;
	while (1)
	{
		sum = i + j;
		if (sum < 4000000)
		{
			if ((sum % 2) == 0)
				count += sum;
		}
		else
			break;
		i = j;
		j = sum;
	}
	printf("%ld\n", count);
	return (0);
}
