#include "main.h"

/**
 * print_numbers - print this as expected 0-9
 * return: void
 */

void print_numbers(void)
{
	char a;

	for (a = 0; a <= 9; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}

