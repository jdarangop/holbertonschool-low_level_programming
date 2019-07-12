#include "holberton.h"

int count(char *s)
{
	if (*s)
	{
		return (1 + count(s + 1));
	}

	return (0);
}

int function(char *s, int len)
{
	len = count(s) - 1;

	if (len % 2 != 0)
	{
		if (*s == *(s + len))
		{
			++s;
			--len;
			return (function(s, len));
		}
		else
		{
			return (0);
		}
		return (1);
	}
	else
	{
		if (*s > *(s + len))
		{
			++s;
			--len;
			return (function(s, len));
		}
		else
		{
			return (0);
		}
		return (1);
	}
}

int is_palindrome(char *s)
{
	return (function(s, 0));
}
