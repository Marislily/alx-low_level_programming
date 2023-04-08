#include "main.h"

/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input
 * @src: input
 * @n: input
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int s;
	int t;

	s = 0;
	while (dest[s] != '\0')
	{
		s++;
	}
	t = 0;
	while (t < n && src[t] != '\0')
	{
		dest[s] = src[t];
		s++;
		t++;
	}
	dest[s] = '\0';
	return (dest);
}
