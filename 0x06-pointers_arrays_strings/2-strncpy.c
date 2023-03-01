#include "main.h"
/**
 * _strncpy - copies a string.
  *@dest: destination to be cpied at
 *@src : word  to copy
 *@n:number of charcters to copy
 *Return: two string together until n
 */

char *_strncpy(char *dest, char *src, int n)
{
int index;
for (index = 0 ; index < n ; index++)
{
dest[index] = src[index];

}
return (dest);
}
