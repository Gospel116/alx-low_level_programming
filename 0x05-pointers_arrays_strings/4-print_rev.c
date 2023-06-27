#include "main.h"

/**
 * print_rev  - This programm prints a string in a reverse format
 * @s: This is used as the string reference pointer
 * Return: Always 0
 */

void print_rev(char *s)
{
	int start = 0;

	while (s[start])
		start++;
	while (start--)
		_putchar(s[start]);
	_putchar('\n');
}
