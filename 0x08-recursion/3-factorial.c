#include "main.h"

/**
 * factorial - find the factorial
 * @n: parameter
 * Return: print the paramater
 */



int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
