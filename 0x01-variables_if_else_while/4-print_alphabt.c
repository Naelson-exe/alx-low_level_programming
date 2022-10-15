#include <stdio.h>

/**
*main - prints all letters of the alphabet except e and q
*Returns: Always 0 (Success)
*/

int main(void)
{
	char alpha = 'a';
		while (alpha <= 'z')
		{
			if ((alpha != 'q') && (alpha != 'e'))
			{
				putchar(alpha);
			}
			alpha++;
		}
		putchar('\n');

		return (0);
}
