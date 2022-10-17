#include <stdio.h>

/**
 *main - prints 0 - 99
 *Description: writes all possible cominations
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if ((i < j) & (j <= '9'))
			{
				putchar(i);
				putchar(j);
				if ((j < '9') | (i < '8'))
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
