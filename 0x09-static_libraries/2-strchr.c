#include "main.h"

/**
 * *_strchr - entry point of program
 * @s: input value
 * @c: input value
 * Return: always 0 (success)
 */

char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
