#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * print_last_digit(int) - prints last digit of a number
 *
 * @i: The value being tested
 *
 * Return: value of the last digit
 *
 */
int print_last_digit(int i)
{
	int lastdigit = i % 10;
	return (_putchar(lastdigit + '0'));
}
