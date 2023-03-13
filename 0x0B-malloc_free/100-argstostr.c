
#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: arguments count.
 * @av: arguments vector.
 * Return:  pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *pt_str = NULL;
	int args_size = 0;
	int i = 0, j = 0;

	if (ac == 0 || !av)
	{
		return (NULL);
	}

	for (i = 1; i < ac; i++)
	{
		char *arg = av[i];

		while (*arg++)
		{
			args_size++;
		}
	}
	pt_str = (char *)malloc(sizeof(char) * (args_size + ac + 1));

	for (i = 0; i < ac; i++)
	{
		char *arg = av[i];

		while (*arg)
		{
			pt_str[j] = *arg;
			arg++;
			j++;
		}
		pt_str[j] = '\n';
		j++;
	}
	pt_str[j] = '\0';
	return (pt_str);
}
