#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description - Prints first 50 fibonnacci numbers starting with 1, 2
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, l[50], count;

	i = 1;
	j = 2;
	l[0] = i;
	l[1] = j;
	printf("%d, %d, ", l[0], l[1]);
	for (count = 2; count < 54; count++)
	{
		l[count] = l[(count - 1)] + l[(count - 2)];
		printf("%d", l[count]);
		if (count == 49)
			continue;
		printf(", ");
	}
	printf("\n");
	return (0);
}
