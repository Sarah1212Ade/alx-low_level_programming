#include <stdio.h>

/**
 * main - entry point
 *
 * Description: using putchar function
 * this program prints all the numbers in base16 in lowercase
 * Return: 0
 */
int main(void)
{
	int num = 0;
	char letter = 'a';

	while (num < 10)
	{
		putchar((num % 10) + '0');
		num++;
	}

	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
	return (0);
}
