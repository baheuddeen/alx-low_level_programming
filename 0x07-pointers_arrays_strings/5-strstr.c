#include "main.h"

/**
 * _strstr -  locates a substring.
 * @haystack: string to search in.
 * @needle: string to search for.
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	void *null = 0;

	while (*haystack)
	{
		int i;

		for (i = 0; haystack[i] == needle[i]; i++)
		{
			if (!needle[i + 1])
				return (haystack);
		}
		haystack++;
	}
	return (null);
}
