#include "main.h"
#include <stdio.h>
/**
 * print_numbers -a function that prints the numbers, from 0 to9
 */

void print_numbers(void)
{
int c;

for (c = 48 ; c <= 57 ; c++)
{
if (c == 50 && c == 52)
{
putchar(c);
}
}

putchar('\n');
}
