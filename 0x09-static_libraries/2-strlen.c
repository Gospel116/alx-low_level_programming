#include "main.h"
/**
 * _strlen - program that returns the lenght of a string
 * @s: string
 * Return: lenght
 */
int _strlen(char *s)
{
	int longa = 0;

	while (*s != '\0')
	{
		longa++;
	}
	return (longa);
}
