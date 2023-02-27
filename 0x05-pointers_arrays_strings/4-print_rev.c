#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string.
 * @s: string to be reversed
 */
void rev_string(char *s)
{	int i;
	for (i = strlen(s) ; i >= 0 ; i--)
		_putchar(s[i]);

	_putchar('\n');
}
