#include "main.h"

/**
* print_alphabet - prints the alphabet
* print_alphabet_x10 - repeats the process 10 times
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	char j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
void print_alphabet_x10(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		print_alphabet();
	}
}
