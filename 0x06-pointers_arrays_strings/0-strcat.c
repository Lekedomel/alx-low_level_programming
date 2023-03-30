#include "main.h"

/**
 * _strcat - the function tha hold the pointers
 * @dest: string 1
 * @src: string 2
 * Return: prints the concatenation of string 1 and 2
 */

char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (i = 0; src[i] != '\0'; i++)
		srclen++;
	for (i = 0; i <= srclen; i++)
		dest[destlen + i] = src[i];
	return (dest);
}
