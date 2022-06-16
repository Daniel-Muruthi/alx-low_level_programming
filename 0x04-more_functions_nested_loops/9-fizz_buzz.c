#include "main.h"

/**
 * fizzbuzz - fizzbuzz challenge
 *
 *
 * Return: 0
 *
 */
int fizzbuzz(void)
{
	int i;
	char a = "Fizz";
	char b = "Buzz";
	char c = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			_putchar(a);
			_putchar(' ');
		}
		else if (i % 5 == 0)
		{
			_putchar(b);
			_putchar(' ');
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			_putchar(c);
			_putchar(' ');
		}
		else
		{
			printf("%d", i);
		}
	}
	return (0);
}
