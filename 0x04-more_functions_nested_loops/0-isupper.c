#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _isupper - function tests whether letters are uppercase
 * @c: parameter
 * Return: 1 || 0
 */
int _isupper(int c)
{

	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
