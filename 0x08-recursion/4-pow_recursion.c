#include "main.h"

/**
 * _pow_recursion - print power
 * @x: first value
 * @y: second value
 * Return: print value of power
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x *  _pow_recursion(x, y - 1));
}
