#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
			printf("%s", a);
		}
		else if (i % 5 == 0)
		{
			printf("%s", b);
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s", c);
		}
		else
		{
			printf("%d", i);
		}
		
		if (i != 100)
		{
			printf(" ");
	}
	return (0);
}
