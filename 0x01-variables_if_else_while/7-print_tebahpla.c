#include <stdio.h>
/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 122;

	while (n >=97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
