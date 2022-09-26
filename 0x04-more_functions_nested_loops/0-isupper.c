#include "main.h"
#include <ctype.h>
/**
 * _isupper - Entry point
 * Description - Checks for uppercase letter
 * Return: Either 1 if upper or 0 if not
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
