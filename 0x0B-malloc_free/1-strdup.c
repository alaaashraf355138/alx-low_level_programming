#include "main.h"
/**
 *_strdup - which contains a copy of the string given as a parameter.
 * @str:string to have copy of it
 * Return:copied string
 */
char *_strdup(char *str)
{
if (str == NULL)
return (NULL);
int size;
size = 0;
while (*(str + size) != '\0')
{
size++;
}
char *target;
target = malloc(sizeof(char) * size);

int pos;
pos = 0;
while (pos < size)
{
target[pos] = str[pos];
pos++;
}
return (target);

}
