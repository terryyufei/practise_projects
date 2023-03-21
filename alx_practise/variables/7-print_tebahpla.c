#include <stdio.h>

/**
  * main - prints alaphabet in lowercase
  *
  * Return: 0
  */

int main(void)
{
	int n = 'z';

	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}	
