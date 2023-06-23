#include "main.h"

/**
 * _isupper - This programm checks for uppercase characters
 * @c: The variable text
 * Return: Always 0
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
