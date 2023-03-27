#include "main.h"

/**
 * _strlen - returns string length
 * @s: string whose length to print
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
