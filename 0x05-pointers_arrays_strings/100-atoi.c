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

	if (s == "-")
		return ((-1 * i));
	else
		return (i);
}
