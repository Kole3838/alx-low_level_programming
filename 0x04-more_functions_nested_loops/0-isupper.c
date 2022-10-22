#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: character to check
 *
 * Return: return 1 if upper or 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
