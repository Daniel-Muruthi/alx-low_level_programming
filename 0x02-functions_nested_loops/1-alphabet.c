#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - function that prints the alphabet
 *
 *
 * Return: 0(success)
 */
void print_alphabet()
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		putchar(c);
	}
	putchar('\n');
	return;
}
int main(void)
{
	print_alphabet();
	return (0);
}
