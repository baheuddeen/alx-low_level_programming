#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers -  prints numbers, followed by a new line.
 * @separator: separator.
 * @n: number of arguments.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i = 0;

	if (!separator)
	{
		return;
	}

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		int num = va_arg(numbers, int);

		printf("%d%s", num, (i == n - 1) ? "" : separator);
	}

	va_end(numbers);
	printf("\n");
}
