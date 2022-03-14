#include <stdio.h>

/**
 * main - prints all different combinations of two digits.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = 0; n <= 100; n++)
	{
		for (m = 0; m <= 100; m++)
		{
			putchar(n);
			putchar(m);
			if (n != 100 || m != 100)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
