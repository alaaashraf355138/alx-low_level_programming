#include "main.h"
/**
 *_isalpha - check if the input is alphabet lower case or uppercase
 * @c: is argument
 *Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}
