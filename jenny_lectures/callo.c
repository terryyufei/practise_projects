#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, i, *ptr;

	printf("enter the value of n:\n");
	scanf("%d", &n);

	ptr = (int *)calloc(n, sizeof(int));

	printf("enter values to be stored at n:\n");

	for (i = 0; i < n; i++)
	{
		scanf("%d", (ptr + i));
	}

	printf("the entered values are:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\t", *(ptr + i));
	}
	free(ptr);
}
