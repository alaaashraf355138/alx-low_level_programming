#include "main.h"
/**
 *swap_int - function that swaps the values of two integers.
 *@a:first input to swap
 *@b: second input to swap
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
