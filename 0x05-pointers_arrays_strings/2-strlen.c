#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: input to know its length
 * Return: number of chrachterss in the string
 */
int _strlen(char *s)
{
int i;
while (*(s + i) != '\0')
i = i + 1;
return (i);
}
