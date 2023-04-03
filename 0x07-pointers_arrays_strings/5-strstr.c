#include <stdio.h>
#include "main.h"

/**
 * _strstr - search for character that is similar
 * @haystack: string 1
 * @needle: string 2
 * Return: null or string
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int h;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (h = 0; needle[h] != '\0'; i++)
		{
			if (haystack[i] == needle[h])
				return (haystack + i);
		}
	}
	return (NULL);
}
