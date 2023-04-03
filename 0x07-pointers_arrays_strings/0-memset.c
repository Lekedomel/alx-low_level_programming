#include "main"

/**
 * _memset - function to work with
 * @s: memory
 * @b: character
 * @n: seize of byte
 * Return: pointer values
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
