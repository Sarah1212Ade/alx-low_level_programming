#include <stdio.h>
/**
 * main - entry point
 *
 * Description: using putchar function
 * this program prints alphabets in reverse
 * Return: 0
 */
int main(void)
{

	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}

	putchar('\n');
	return (0);
}
