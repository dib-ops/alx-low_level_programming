#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char ch;
	int n;

	ch = 'a';
	n = 0;
	while (n < 10)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}

		_putchar('\n');
		n++;
	}
}
