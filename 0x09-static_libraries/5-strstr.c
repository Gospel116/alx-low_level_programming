#include "main.h"

/**
 * *_strstr - program entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{

		char *o = haystack;
		char *i = needle;

		while (*o == *i && *i != '\0')
		{
			o++;
			i++;
		}
		if (*i == '\0')
			return (haystack);
	}
	return (0);
}
