#include <ctype.h>
/**
 * _islower - Entry point
 * Description - Function that checks for lowercase character
 * @c: Character input to be checked
 * Return: Either 1 or 0 depending on the input
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
