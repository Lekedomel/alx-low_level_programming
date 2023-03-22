#include "main.h"

/**
 * _islower - prints lowercase
 *
 * @c: parameter function
 *
 * Return: 1 if it is lowercase and zero otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
