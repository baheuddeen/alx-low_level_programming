#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat -  concatenates two strings..
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes of s2 to be concatenated.
 * Return: pointer to the new string or NULL when it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0, s2_len = 0;
	unsigned int i = 0;
	char *str = NULL;

	/* get first string length*/
	for (s1_len = 0; s1 && s1[s1_len]; s1_len++)
		;

	/* get second string length*/
	for (s2_len = 0; s2 && s2[s2_len]; s2_len++)
		;

	n = (n >= s2_len) ? s2_len : n;

	str = malloc((s1_len + n + 1) * sizeof(*str));
	if (!str)
		return (NULL);

	for (i = 0; s1 && i < s1_len; i++)
	{
		str[i] = s1[i];
	}

	for (i = 0; s2 && i < n; i++)
	{
		str[s1_len + i] = s2[i];
	}

	str[s1_len + n] = '\0';
	return (str);
}
