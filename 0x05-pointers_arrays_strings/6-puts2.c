#include "main.h"
/**
 * puts2 -  print only one character out of two
 * starting with the first one
 * @str: input of value
 * Return: print void
 */
void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *j = str;
	int o;

	while (*j != '\0')
	{
		j++;
		longi++;
	}
	t = longi - 1;
	for (o = 0 ; o <= t ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
