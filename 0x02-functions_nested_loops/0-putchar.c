#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * main - print string
 *
 *
 * Return: 0(success)
 */
int main(void)
{
	int i;
	char word[8] = "_putchar";
	int j = sizeof(word);

	for (i = 0; i < j; i++)
	{
		putchar(word[i]);
	}
	putchar('\n');
	return (0);

}
