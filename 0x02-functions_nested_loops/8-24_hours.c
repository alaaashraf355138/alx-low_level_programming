#include "main.h"
/**
 *jack_bauer -a function that prints every minute of the day 00:00 to 23:59.
 *Return:0
 *
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24 ; i++)
	{
		for (j = 0 ; j < 60 ; j++)
		{
			if (i < 10)
			{
				i = (i % 10) + '0';
			}
			if (j < 10)
			{
				j = (j % 10) + '0';
			}
		_putchar(i + '0');
		_putchar(':');
		_putchar(j + '0');
		j = 0;
		}

	}
}


