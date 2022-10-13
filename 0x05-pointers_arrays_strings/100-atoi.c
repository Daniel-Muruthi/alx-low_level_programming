#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _atoi - Entry Point
 * Description - converts string into an integer
 * @s: string
 * Return: Always (0) Success
 */
int _atoi(char *s)
{
	int i;

	i = atoi(s);
	printf("%d\n", i);
	return (0);
}
