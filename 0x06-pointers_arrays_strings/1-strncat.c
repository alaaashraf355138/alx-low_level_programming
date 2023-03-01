#include "main.h"
/**
 *_strncat -  concatenates two strings
 *@dest:first word to concatenate
 *@src : word added to dest word
 *@n:number of charcters to concatenate
 *Return: two string together until n
 */
char *_strncat(char *dest, char *src, int n)
{
int index;
int dest_len = 0;

for (index = 0 ; dest[index] ; index++)
dest_len++;
for (index = 0 ; index < n ; index++)
dest[dest_len++] = src[index];

return (dest);
}
