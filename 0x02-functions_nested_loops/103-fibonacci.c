#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description - find and print even valued sum terms in the fibonacci sequence
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i[50], j, count, sum;

	sum = 0;
	i[0] = 1;
	i[1] = 2;
	for (count = 2; count <= 50; count++)
	{
		i[count] = i[(count - 1)] + i[(count + 2)];
		for (j = 0; j <= 50; j++)
		{
			if (i[j] % 2 == 0)
			{
				sum = sum + i[j];
				if (i[j] !< 4000000)
				{
					printf("%ld", sum);
					break;
				}
			}
		}
	}
	printf("\n");
	return (0);
}
