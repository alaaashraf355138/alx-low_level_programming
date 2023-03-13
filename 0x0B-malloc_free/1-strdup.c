#include "main.h"
/**
 *_strdup - which contains a copy of the string given as a parameter.
 * @str:string to have copy of it
 */
char *_strdup(char *str)
{
int size;
int pos;
char *target;

if (str == NULL)
return (NULL);
size = 0;
while (*(str + size) != '\0')
{
size++;
}
target = malloc(sizeof(char) * size);

pos = 0;
while (pos < size)
{
target[pos] = str[pos];
pos++;
}
return (target);
}
