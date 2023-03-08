#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: string to have its length
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int len;

	if (*s)
	{
		len ++;
		len += _strlen_recursion(s + 1);

	}
	return (len);
}
