#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/*
* main - prints a-z in lower case
* Return: Always 0 (Success)
*/
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
