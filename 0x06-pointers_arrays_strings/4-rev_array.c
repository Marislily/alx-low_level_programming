#include "main.h"
/**
 * reverse_array - reverse an array of integers
 * @a: array
 * @n: number of elements of the array
 * Return: rev
 */

void reverse_array(int *a, int n)
{
	int s;
	int t;

	for (s = 0; s < n; s++)
	{
		n--;
		t = a[s];
		a[s] = a[n];
		a[n] = t;
	}
}
