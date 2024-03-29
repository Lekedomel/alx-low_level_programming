#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function parameter
 * @a: digit 1
 * @size: size of digit
 * Return: print void
 */
void print_diagsums(int *a, int size)
{
	int num1, num2, z;

	num1 = 0;
	num2 = 0;

	for (z = 0; z < size; z++)
	{
		num1 = num1 + a[z * size + z];
	}

	for (z = size - 1; z >= 0; z--)
	{
		num2 += a[z * size + (size - z - 1)];
	}

	printf("%d, %d\n", num1, num2);
}

