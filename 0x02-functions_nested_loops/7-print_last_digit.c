#include "main.h"

/**
 * print_last_digit - that prints last digit
 *
 * @i: function parameter
 *
 * Return: what m is
 */


int print_last_digit(int i)
{
	int m;

	m = i % 10;
	if (i < 0)
		m = -m;
	_putchar(m + '0');
	return (m);
}
