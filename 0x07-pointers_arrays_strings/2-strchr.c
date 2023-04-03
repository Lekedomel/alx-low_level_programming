#include<stdio.h>
#include "main.h"

/**
 * _strchr - function
 * @s: charater
 * @c: last character
 * Return: print last character
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
