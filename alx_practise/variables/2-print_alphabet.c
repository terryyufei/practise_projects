#include <stdio.h>

/**
  *main - a program that prints alphabet i lowercase
  *
  * Return: 0
  */

int main(void)
{
	int n = 'a';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
