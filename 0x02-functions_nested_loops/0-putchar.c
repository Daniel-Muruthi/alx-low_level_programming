#include "main.h"
/**
 *
 * main - print string
 *
 * Return: 0(success)
 */
int main(void)
{
	int i;
	char word = "_putchar";

	for (i = 0; i <= strlen(word); i++)
	{
		putchar(word[i]);
	}
	putchar('\n');
	return (0);

}
