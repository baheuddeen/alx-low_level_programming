#include <stdlib.h>
#include "main.h"

/**
 * str_concat - oncatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: pointer should point to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2
 * OR NULL on failure,
 */
char *str_concat(char *s1, char *s2)
{
	char *pt_str = NULL;
	int s1_size = 0, s2_size = 0;
	int i = 0, j = 0;

	while (s1 && s1[s1_size])
		s1_size++;
	while (s2 && s2[s2_size])
		s2_size++;

	pt_str = (char *)malloc(sizeof(char) * (s1_size + s2_size + 1));

	if (!pt_str)
		return (NULL);
	for (i = 0; i < s1_size; i++)
	{
		pt_str[j] = s1[i];
		j++;
	}

	for (i = 0; i < s2_size; i++)
	{
		pt_str[j] = s2[i];
		j++;
	}
	pt_str[j] = '\0';

	return (pt_str);
}
