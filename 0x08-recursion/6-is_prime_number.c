#include "main.h"
/**
 * is_prime_number - function to check if an integer is a prime number
 * @n: number to check
 *
 * Return: 1 if n is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (check_divisor(n, n - 1));
}


/**
 * check_divisor - helper function to check if an integer is a prime number
 * @n: number to check
 * @m: divisor
 *
 * Return: 1 if n is a prime number, otherwise return 0
 */
int check_divisor(int n, int m)
{
	if (m <= 1)
		return (1);

	if (n % m == 0)
		return (0);

	return (check_divisor(n, m - 1));
}
