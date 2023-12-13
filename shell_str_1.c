#include "main.h"

/**
 * _isdigit - defines if string passed is a number
 * @s: input string
 * Return: 1 or 0
 */
int _isdigit(const char *s)
{
	unsigned int i;

	for (i = 0; s[i]; i++)
		if (s[i] < 48 || s[i] > 57)
			return (0);
	return (1);
}

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: accepted bytes
 * Return: the number of accepted bytes
 */
int _strspn(char *s, char *accept)
{
	int i, j, bool;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		bool = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (i);
}
