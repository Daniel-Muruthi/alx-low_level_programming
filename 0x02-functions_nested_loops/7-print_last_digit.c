#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - Entry point
 * Description - Function prints last digit of a number
 * @i: Number to obtain last digit from
 * Return: returns last digit
 */
int print_last_digit(int i)
{
	int j;

	if (i < 0)
	{
		j = (-1 * (i % 10));
	}
	else
	{
		j = (i % 10);
	}
	_putchar(j + '0');
	return (j);
}
