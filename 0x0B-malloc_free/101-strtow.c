#include <stdlib.h>
#include "main.h"

int count_words(char *str);
char *skip_chars(char *str);
char *skip_spaces(char *str);

/**
 * strtow - splits a string into words.
 * @str: string to split
 * Return: pointer to an array of words Or NULL on failure.
 */
char **strtow(char *str)
{
	char **words = NULL;
	char *str_temp = str;
	int words_count = 0;
	int i = 0, j = 0;

	if (!str || !*str)
	{
		return (NULL);
	}

	words_count = count_words(str);
	if (words_count == 0)
	{
		return (NULL);
	}

	words = (char **)malloc(sizeof(char *) * (words_count + 1));
	if (!words)
	{
		return (NULL);
	}

	for (i = 0; i < words_count; i++)
	{
		int word_size = 0;

		str_temp = skip_spaces(str_temp);

		while (str_temp[word_size] && str_temp[word_size] != ' ')
			word_size++;

		words[i] = (char *)malloc(sizeof(char) * (word_size + 1));
		if (!words[i])
		{
			while (i >= 0)
			{
				free(words[i]);
				i--;
			}
			free(words);
			return (NULL);
		}
		for (j = 0; j < word_size; j++)
		{
			words[i][j] = str_temp[j];
		}
		words[i][j] = '\0';
		str_temp = skip_chars(str_temp);
	}
	words[i] = NULL;
	return (words);
}

/**
 * skip_spaces - skip spaces.
 * @str: string.
 * Return: pointer to the first non space char.
 */
char *skip_spaces(char *str)
{
	while (*str && *str == ' ')
		str++;
	return (str);
}

/**
 * skip_chars - skip chars.
 * @str: string.
 * Return: pointer to the first space.
 */
char *skip_chars(char *str)
{
	while (*str && *str != ' ')
		str++;
	return (str);
}

/**
 * count_words - skip spaces.
 * @str: string.
 * Return: number of words.
 */
int count_words(char *str)
{
	int count = 0;
	char *c = str;

	while (*(c = skip_spaces(c)))
	{
		count++;
		c = skip_chars(c);
	}
	return (count);
}
