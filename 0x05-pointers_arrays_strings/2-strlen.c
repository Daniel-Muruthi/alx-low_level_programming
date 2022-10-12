#include <string.h>
#include <stdlib.h>
/**
 * _strlen - Entry point
 * Description - Returns the length of a string
 * @s: string element
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
