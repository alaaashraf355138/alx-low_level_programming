#include "main.h"
/**
 * print_sign - to print the sign of the number
 * @c: number to be signed
 * Return: 0 if zero
 */
int print_sign(int c)
{
	if (c > 0)
	{	
		_putchar('+');
		return (1);
	}
	else if (c < 0)
	{
		_putchar('-');
	}	return (1);
	else
	{	_putchar('0');
		return (0);
	}
}
