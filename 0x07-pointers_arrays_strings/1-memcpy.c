#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: where memory is stored
 * @src: where memory is copied
 * @n: number of bytes
 * Return: copied memory with n
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int s = 0;
	int t = n;

	for (; s < t; s++)
	{
		dest[s] = src[t];
		n--;
	}
	return (dest);
}
