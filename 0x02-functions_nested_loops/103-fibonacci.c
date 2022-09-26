#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description - find and print even valued sum terms in the fibonacci sequence
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i[33], limit, count, sum;

	sum = 0;
	limit = 4000000;
	i[0] = 1;
	i[1] = 2;
	for (count = 2; count < 34; count++)
	{
		i[count] = i[(count - 1)] + i[(count + 2)];
		if (i[count] % 2 == 0)
		{
			sum = sum + i[count];
			if (i[count] > limit)
			{
				break;
			}
			else
				printf("%ld", sum);
		}
	}
	printf("\n");
	return (0);
}
