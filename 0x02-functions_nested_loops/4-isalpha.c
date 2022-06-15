#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * _isalpha - checks for alphabetic characters
 *
 * @c: The value being tested
 *
 * Return: 1 || 0
 *
 */
int _isalpha(int c)
{
	int d = isalpha(c);

	if (d)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
