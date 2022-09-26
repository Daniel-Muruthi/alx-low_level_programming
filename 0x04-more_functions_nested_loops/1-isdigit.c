#include "main.h"
#include <ctype.h>
/**
 * _isdigit - Entry point
 * Description - Checks for a digit(0 - 9)
 * @c: Digit to be checked
 * Return: Either 1 if true or 0 if false
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
