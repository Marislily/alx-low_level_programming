#include "main.h"

/**
 * swap_int - swaps value a to b
 * @a: value a
 * @b: value b
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
