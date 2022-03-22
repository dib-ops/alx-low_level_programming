#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - tests function that prints if integer is positive or negative
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	positive_or_negative(int n);
	return (0);
}
