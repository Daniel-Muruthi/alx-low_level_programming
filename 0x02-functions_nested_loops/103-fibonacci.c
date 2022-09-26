#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description - find and print even valued sum terms in the fibonacci sequence
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i, j, count, sum;

	sum = 0;
	i = 0;
	j = 1;
	while (1)
	{
		if (sum < 4000000)
		{
			sum = i + j;
			if ((sum % 2) == 0)
				count += sum;
		}
		else
			break;
	}
	printf("%ld\n", sum);
	return (0);
}
