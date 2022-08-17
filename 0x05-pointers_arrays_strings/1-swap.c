#include "main.h"

/**
 * swap_int - swap integer a with b
 * @a: first int
 * @b: second int
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
