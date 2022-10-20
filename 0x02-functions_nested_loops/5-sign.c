#include "main.h"

/**
* print_sign - prints the sign and returns a value based on the number
* Return: 0 if it is 0, 1 if it is positive and -1 if it is negative
*/
int print_sign(int n)
{
	if (n > '0')
	{
	_putchar('+');
	return (1);
	}
	else if (n < '0')
	{
	_putchar('-');
	return(-1);
	}
	else
	{
	_putchar('0');
	return(0);
	}
}
