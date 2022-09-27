#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description - Finds and printd largest prime factor of a number
 * Return: Always 0 (Success)
 */
int main(void)
{
	long long int number, i, j;

	i = 0;
	j = 2;
	number = 612852475143;
	while (number != 1)
	{
		if (number % j == 0)
		{
			while (number % j == 0)
			{
				number /= j;
			}
			i = j;
		}
		j++;
	}
	printf("%lld\n", i);
	return (0);
}
