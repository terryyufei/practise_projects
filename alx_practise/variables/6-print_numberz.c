#include <stdio.h>

/**
  * main - prints all single digit number of base 10
  * can only use putchar twice
  * not allowed to use any variable of type char
  *
  * Return: 0
  */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{ 
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}	

