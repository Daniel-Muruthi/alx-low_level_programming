#include <stdio.h>
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

	j = (i % 10);
	return (j);
}
