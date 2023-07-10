#include "main.h"

/**
 * _isupper - checked to see if uppercase letters
 * @c: char to check
 *
 * Return: if uppercase letters return to 1, else return to 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
