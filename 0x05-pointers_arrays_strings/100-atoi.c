#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _atoi - Entry Point
 * Description - converts string into an integer
 * @s: string
 * Return: A Number
 */
int _atoi(char *s)
{
	int i = atoi(s);
	int j;

	for (j = 0; j < strlen(s); j++)
	{
		if (s[j] == "-")
			return ((-1 * i));
		else
			return (i);
	}
}
