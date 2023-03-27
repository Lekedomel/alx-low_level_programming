#include "main.h"

/**
 * _strlen - count the number of character
 * @s: string parameter
 * Return: lenght
 */

int _strlen(char *s)
{
	int a;
	int count = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		count++;
	}
	return (count);
}
