#include "main.h"
/**
 * _isdigit - a function that checks for a digit (0 through 9
 * @c: input to function
 * Return: 1 if digit ,0 otherwiswe
 */
int _isdigit(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
else
{
return (0);

}
}
