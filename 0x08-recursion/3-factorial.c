#include "main.h"
/**
 * factorial - returns the factorial of a given number.
 * @n:number to have its factorial
 * Return: factorial of given number
 */
int factorial(int n)
{
if (n < 0)
return (-1);

if (n == 0)
return (0);
if (n == 1)
return (1);
return (n * factorial(n - 1));

}
