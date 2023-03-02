#include <stdio.h>
void print_buffer_line(int, char *, int);
#define SIZE_PER_LINE 10

/**
 * print_buffer - prints a buffer.
 * @b: buffer to print.
 * @size: bytes of the buffer pointed by b.
 */
void print_buffer(char *b, int size)
{
	int adress = 0;
	char *current_char = b;
	int i = 0;

	while (i < size)
	{
		i++;
		if (i % SIZE_PER_LINE != 0)
			continue;
		print_buffer_line(adress, current_char, SIZE_PER_LINE);
		adress += SIZE_PER_LINE;
		current_char += SIZE_PER_LINE;
	}
	if (i % SIZE_PER_LINE > 0)
	{
		print_buffer_line(adress, current_char, i % SIZE_PER_LINE);
	}
}

/**
 * print_buffer_line - print buffer line.
 * @address: address.
 * @s: string.
 * @size_printed: size to print.
 */
void print_buffer_line(int address, char *s, int size_printed)
{
	int i = 0;

	printf("%08x: ", address);
	while (i < SIZE_PER_LINE)
	{
		if (i < size_printed)
			printf("%02x", s[i]);
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;
	}
	i = 0;
	while (i < size_printed)
	{
		if (s[i] >= ' ')
		{
			printf("%c", s[i]);
		}
		else
		{
			printf(".");
		}
		i++;
	}
	putchar('\n');
}
