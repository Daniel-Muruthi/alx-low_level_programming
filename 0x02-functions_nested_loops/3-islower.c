#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * _islower - checks for lowercase characters
 *
 *
 *
 * Return: 1 || 0
 *
 */
int _islower(int c)
{
	int d = islower(c);

	if (d)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
