#include <stdio.h>
/**
 * main - entry point
 *
 * Description: using putchar function
 * this program prints all possible combination of single numbers
 * Return: 0
 */
int main(void)
{

	int num = 0;

	while (num < 10)
	{
		putchar((num % 10) + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
