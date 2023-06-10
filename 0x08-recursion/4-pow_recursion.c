#include "main.h"

/**
 * A _pow_recursion returns the value of x raised to the pow
 * @x: value to raise
 * @y: power
 *
 * the return is the result of the power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y==0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
