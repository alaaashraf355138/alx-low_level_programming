#include "main.h"
/**
 *str_concat- back a pointer to array
 * @s1:first string
 * @s2:swcond string
 * Return: two strings together
 */
char *str_concat(char *s1, char *s2)
{
int siz1;
int siz2;
int tot;
char *target;



siz1 = 0;
siz2 = 0;

while (*(s1 + siz1) != '\0')
{
siz1++;
}
while (*(s2 + siz2) != '\0')
{
siz2++;
}
tot = siz1 + siz2;

target = malloc(sizeof(char) * tot);
int pos;
pos = 0;
while (pos < siz1)
{
target[pos] = s1[pos];
pos++;
}
int pos2;
pos2 = 0;
while (siz1 < tot)
{
target[siz1] = s2[pos2];
siz1++;
pos2++;
}
return (target);
}
