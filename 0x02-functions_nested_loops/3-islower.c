#include "main.h"
#include <ctype.h>
/**
 * _islower - check the letter if it is lower case or not
 *@c : argument from the function
 * islower - chech them
 *
 * Return : 0 if not
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
		return (0);

}
