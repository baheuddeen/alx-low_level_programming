#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings -  prints strings, followed by a new line.
 * @separator: separator.
 * @n: number of arguments.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i = 0;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		char *string = va_arg(strings, char *);

		printf("%s%s",
			   (!string) ? "(nil)" : string,
			   ((i == n - 1) || !separator) ? "" : separator);
	}

	va_end(strings);
	printf("\n");
}
