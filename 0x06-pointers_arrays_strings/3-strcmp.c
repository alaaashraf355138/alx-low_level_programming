#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1:firat to compare
 * @s2: second to compare
 * Return: 0 if equal
 * ,greter than 0 if first >second in asci code
 * ,less than 0 if second>first
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}


	return (*s1 - *s2);
}
