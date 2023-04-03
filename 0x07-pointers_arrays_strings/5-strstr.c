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
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
