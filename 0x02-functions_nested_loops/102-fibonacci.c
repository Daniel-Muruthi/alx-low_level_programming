#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description - Prints first 50 fibonnacci numbers starting with 1, 2
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int l[50], count;

	l[0] = 1;
	l[1] = 2;
	printf("%ld, %ld, ", l[0], l[1]);
	for (count = 2; count < 50; count++)
	{
		l[count] = l[(count - 1)] + l[(count - 2)];
		printf("%ld", l[count]);
		if (count == 49)
			break;
		printf(", ");
	}
	printf("\n");
	return (0);
}
