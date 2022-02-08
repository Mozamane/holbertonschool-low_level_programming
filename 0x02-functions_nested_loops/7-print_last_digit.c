#include "main.h"

/**
 * @-print_last_digit.c - check the code for Holberton School students.
 * Return: Always 0
 */
int print_last_digit(int n)
{
	n = (n % 10);
	n = n % 10;

	if (n < 0)
	{
		return (-n);
	}
	else
	{
		n = -n;
		_putchar(n + '0');
		return (n);
	}
	return (0);
}
