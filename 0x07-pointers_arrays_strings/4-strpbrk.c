#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - search for character that is similar
 * @s: string 1
 * @accept: string 2
 * Return: null or string
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int a;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (s[i] == accept[a])
				return (s + i);
		}
	}
	return (NULL);
}
