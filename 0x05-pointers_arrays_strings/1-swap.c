#include "main.h"

/**
 * swap_int - swaping values
 * @a: one
 * @b: value two
 * Return: void
 */


void swap_int(int *a, int *b)
{
	int f;

	f = *a;
	*a = *b;
	*b = f;
}
