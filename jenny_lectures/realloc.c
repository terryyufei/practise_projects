#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that reallocates n
 * Return: 0
 */

int main(void)
{
	int n, i, *ptr;
	printf("enter the total no of values\n");
	scanf("%d", &n);

	ptr = (int *)malloc(n * sizeof(int));

	printf("enter the values:\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", (ptr + 1));
	}
	printf(" enter the updated size of:\n");
	scanf("%d", &n);

	int *ptr1 = (int *)realloc(ptr, n * sizeof(int));

	printf("previous address: %p new address: %p\n", ptr, ptr1);

	printf("enter the updated values\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", (ptr1 + 1));
	}


	/*printf("the entered values are:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\t", *(ptr1 + i));
	}*/

	 
	free(ptr1);
}
