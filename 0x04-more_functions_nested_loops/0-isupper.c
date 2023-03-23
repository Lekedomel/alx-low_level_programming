#include "main.h"

/**
 * _isupper - is function
 *
 * @c: para type
 *
 * Return: always
 *
 */


int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
