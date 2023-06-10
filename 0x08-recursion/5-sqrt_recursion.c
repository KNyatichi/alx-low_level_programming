#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * The _sqrt_recursion returns the natural square root of a number
 * @n: is the number to calculate the square root of
 * it returns the resulting square root
 * actual_sqrt_recursion recurses to find the natural
 * square root of a number
 * @n: is the number used to calculate the square root
 * @i is the iterator
 * returns the resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}

