#include "main.h"
/**
 *more_numbers -  prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
int i;
int j;

for (i = 0 ; i < 10 ; i++)
{
for (j = 48 ; j <= 61 ; j++)
{_putchar(j + "0");
}
_putchar('\n');
}
_putchar('\n');
}
