#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: - the number to be check
 * Return: 1 for +ve , -1 for -ve and 0 for else
 */

int print_sign(int n)
{	
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{	_putchar(45);
		return (-1);
	}
	else
	{	_putchar(48);
		return(0);	
	}
}
