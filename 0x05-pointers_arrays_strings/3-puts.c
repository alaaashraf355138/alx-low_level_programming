#include "main.h"
#include <string.h>
/**
 * _puts -  prints a string, followed by a new line
 * @str: value to be printed
 */
void _puts(char *str)
{
	int i;
	while (*(str + i) != '\0')
		_putchar(*(s + i));
	_putchar('\n');
}
