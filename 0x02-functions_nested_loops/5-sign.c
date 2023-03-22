#include "main.h"

/**
 * print_sign - function paramter
 *
 * @n: function paramter two
 *
 * Return: print the figurs as required
 */


int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n == 0)
	{
		 _putchar('0');
		 _putchar(',');
		 _putchar(' ');
		 return (0);
	}
	else
	{
		 _putchar('-');
		 _putchar(',');
		 _putchar(' ');
		 return (-1);
	}
}
