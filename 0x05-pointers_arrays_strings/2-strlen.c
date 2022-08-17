#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: argument to the function
 * Return: integer
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count += 1;
		s++;
	}
	return (count);
}
