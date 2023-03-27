#include "main.h"

/**
 * print_rev - print in reverse
 * @str: string of value
 * Return: void
 */

void print_rev(char *str)
{
	int i;
	int count = 0;

	for (i = 0; str[i] != '\0'; i++)
		count++;
	for (i = count; i >= 0; i--)
		_putchar(str[i]);
	_putchar('\n');
}
