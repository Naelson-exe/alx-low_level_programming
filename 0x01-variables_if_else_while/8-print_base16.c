#include <stdio.h>

/**
 * main - prints all the numbers in base 16 in lower case
 *Return: Always 0 (Success)
 */
int main(void)
{
	int b16 = '0';
	char B16 = 'a';

	while (b16 <= '9')
	{
		putchar(b16);
		b16++;
	}
	
	while (B16 <= 'f')
	{
		putchar(B16);
		B16++;
	}
	putchar('\n');
	return (0);
}
