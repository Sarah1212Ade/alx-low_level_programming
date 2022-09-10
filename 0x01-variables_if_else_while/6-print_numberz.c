#include <stdio.h>
/**
 * main - entry point
 *
 * Description: using putchar function
 * this program prints number ranging form 0-9
 * Return: 0
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar((num % 10) + '0');
		num++;
	}

	putchar('\n');

	return (0);
}
