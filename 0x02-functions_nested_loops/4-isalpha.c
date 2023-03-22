#include "main.h"

/**
 *  _isalpha - check for alphabet
 *
 *  @c: parameter to be looked
 *
 *  Return: return 1 if it is alphabet and 0 otherwise
 */


int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
