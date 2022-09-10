#include <stdio.h>
/**
 * main - entry point
 *
 * Description: using putchar function
 * this program prints snumber ranging from 0-9
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
