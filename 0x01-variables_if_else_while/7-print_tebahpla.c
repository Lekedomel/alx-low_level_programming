#include <stdio.h>

/**
 * main - main job
 *
 * Return: job weldone
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
