#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _isdigit - function that checks for a digit
 * @c: parameter
 * Return: 1 || 0
 */
int _isdigit(int c)
{

	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
