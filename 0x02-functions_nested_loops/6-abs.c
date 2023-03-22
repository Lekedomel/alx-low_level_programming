#include "main.h"

/**
 * _abs - interger value
 *
 * @a: parameter to check
 *
 * Return: the a
 */


int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
