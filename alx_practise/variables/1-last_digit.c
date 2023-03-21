#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - program that assigns random numbers to n
* @n: the variable
* Return: 0
*/

int main(void)
{
	int n;
/*	int num;*/

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of, %d\n", n);
	scanf("%d", &n);

	if (n > 5)
	{
		printf("%d and is greater than 5\n", n);
	}
	else if ((n < 6) && (n != 0))
	{
		printf("%d and is less than 6 and not zero\n", n);
	}
	else
	{
		printf("%d and is zero\n", n);
	}
	return (0);
}
