#include "main.h"

/**
 * cap_string - This program prints all words of a string in all caps
 * @str: The string to be capitalized
 * Return: The pointer to the string changed
 */

char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
	while (!(str[index] >= 'a' && str[index] <= 'z'))
	index++;
	if (str[index - 1] == ' ' ||
	str[index - 1] == '\t' ||
	str[index - 1] == '\n' ||
	str[index - 1] == ',' ||
	str[index - 1] == ';' ||
	str[index - 1] == '.' ||
	str[index - 1] == '!' ||
	str[index - 1] == '?' ||
	str[index - 1] == '"' ||
	str[index - 1] == '(' ||
	str[index - 1] == ')' ||
	str[index - 1] == '{' ||
	str[index - 1] == '}' ||
	index == 0)
	str[index] -= 32;
	index++;
	}
	return (str);
}
