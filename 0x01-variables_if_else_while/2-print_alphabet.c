#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description - prints alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c < 'z'; ++c)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
