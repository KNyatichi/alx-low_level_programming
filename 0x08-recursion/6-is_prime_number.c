#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number shows if an integer is a prime number or not
 * @n: is the number to evaluate
 * Return 1 if n is a prime number and 0 if it is not
 * actual_prime calculates if a number is a recursive prime
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n-1));
}

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i -1));
}
