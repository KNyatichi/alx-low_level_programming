#include "main.h"

/**
 * wildcmp is used to compare strings
 * @s1 is a pointer to string parameters
 * @s2 is also a pointer to string parameters
 * Return 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0\' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		returrn (*s2 == '\0');
	}

	if (*s2 == '*')
	{
		return (wildcmp(s1 +1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 +1));
	}
	return (0);
}
