#include "main.h"
/**
 *_memset -fill a block of memory with a specific value
 *@b: the desired value
 *@s: starting address of memory to be filled
 *@n: number of bytes to be changed
 *
 *Return: changed array with the new values for n bytes
 */
char *_memeset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
