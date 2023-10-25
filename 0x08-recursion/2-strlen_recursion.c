#include "main.h"
/**
 * _strlen_recursion - Returns the length of the string s.
 *
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int longi = 0;

	if (*s != '\0')
	{
		longi += _strlen_recursion(s + 1) + 1;
	}

	return (longi);
}
