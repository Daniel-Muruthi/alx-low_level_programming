#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description - Print alphabet in lowercase and uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c, h;

	for (c = 'a'; c <= 'z'; ++c)
	{
		putchar(c);
	}
	for (h = 'A'; h <= 'Z'; ++h)
	{
		putchar(h);
	}
	putchar('\n');
	return (0);
}
