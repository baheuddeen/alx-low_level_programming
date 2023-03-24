#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_all -  prints anything.
 * @format: string.
 *
 */
void print_all(const char *const format, ...)
{
	va_list args;
	int length = strlen(format) + 1, i = 0, j = 0;
	char *temp_format = malloc(length), *temp_s = NULL;
	char *types[] = {"c", "i", "f", "s", NULL};

	strcpy(temp_format, format);
	va_start(args, format);
	while (temp_format[j])
	{
		i = 0;
		while (types[i] != NULL)
		{
			switch (temp_format[j])
			{
			case 'c':
				printf("%c", va_arg(args, int));
				printf("%s", (j != length - 2) ? ", " : "");
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				printf("%s", (j != length - 2) ? ", " : "");
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				printf("%s", (j != length - 2) ? ", " : "");
				break;
			case 's':
				temp_s = va_arg(args, char *);
				printf("%s", temp_s ? temp_s : "(nil)");
				printf("%s", (j != length - 2) ? ", " : "");
				break;
			}
			break;
			i++;
		}
		j++;
	}
	va_end(args);
	printf("\n");
}
