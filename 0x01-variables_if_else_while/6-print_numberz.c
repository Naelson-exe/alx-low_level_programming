#include <stdio.h>

/**
* main - prints single digit denary numbers using putchar
*Return: Always 0 (Success)
*/
int main(void)
{
	int n = '0';
	
	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}

