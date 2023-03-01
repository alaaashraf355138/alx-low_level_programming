#include "main.h"
/**
 *_strcat -  concatenates two strings
 *@dest:first word to concatenate
 *@src : word added to dest word
 *Return: two string together
 */
char *_strcat(char *dest, char *src)
{
int index;
int dest_len = 0;

for (index = 0 ; dest[index] ; index++)
dest_len++;
for (index = 0 ; src[index] ; index++)
dest[dest_len++] = src[index];

return (dest);
}
