#include “main.h”
#include <ctype.h>

/**
 * _isupper-Entry point: prints uppercase
 * @c: single user input
 * Return: return 1 if c is uppercase, return 0 if not
 *
 *
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
}
