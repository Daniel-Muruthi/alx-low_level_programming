#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * print_last_digit - prints last digit of a number
 *
 * @i: The value being tested
 *
 * Return: value of the last digit
 *
 */
int print_last_digit(int i)
{
	int lastdigit;

	if (i < 0)
	{
		lastdigit = (-1 * (i % 10));
	}
	else
	{
		lastdigit = i % 10;
	}
	_putchar(lastdigit + '0');
	return (lastdigit);
}
