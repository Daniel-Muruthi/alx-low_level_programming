#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _isalpha - Entry point
 * Description - Checks for alphabetic character
 * @c: character to be checked
 * Return: Either 1 or 0
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
