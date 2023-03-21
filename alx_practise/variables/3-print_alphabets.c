#include <stdio.h>

/**
  * main - prints alpahbet in lowercase and then in uppercase
  *
  * Return: 0
  */

int main(void)
{
	int ch = 'a';
	int n = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (n <= 'Z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}	
