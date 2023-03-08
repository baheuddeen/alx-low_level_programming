#include "main.h"
int is_prime_number_v2(int n, int c);

/**
 * is_prime_number -  check of number is prime or not.
 * @n: number.
 * Return: returns 1 if the input integer is a prime number,
 * otherwise return 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_number_v2(n, 2));
}

/**
 * is_prime_number_v2 -  check of number is prime or not.
 * @n: number.
 * @c: counter.
 * Return: returns 1 if the input integer is a prime number,
 * otherwise return 0.
 */
int is_prime_number_v2(int n, int c)
{
	if (c == n)
		return (1);
	if (n % c == 0)
		return (0);
	return (1 * is_prime_number_v2(n, c + 1));
}
