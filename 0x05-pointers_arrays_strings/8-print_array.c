#include <stdlib.h>
#include <stdio.h>
/**
 * print_array - Entry Point
 * Description - Function that prints n elements of an array of integers
 * @a: Array
 * @n: number of elements in a array
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
		i++;
	}
	printf("\n");
}
