#include <unistd.h>

/**
 * main - entry point
 *
 * Description: using unistd header file
 * program prints and that piece of art is useful" - Dora Korpar, 2015-10-19
 * Return: 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
	return (1);
}