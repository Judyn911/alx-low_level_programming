
ASJ18
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming/0x02-functions_nested_loops/7-print_last_digit.c

Abdulwahab task 7
 0 contributors
26 lines (23 sloc)  388 Bytes
#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer
 *@n: integer whose last digit we want to find
 *
 * Return: int
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		last_digit = -1 * (n % 10);
		_putchar(last_digit + 48);
		return (last_digit);
	}
	else
	{
		last_digit = n % 10;
		_putchar(last_digit + 48);
		return (last_digit);
	}
}
