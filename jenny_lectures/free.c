#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i, *ptr;

	printf("enter the value of n\n");
	scanf("%d", &n);

	ptr = (int *)malloc(n * sizeof(int));
	if (ptr == NULL)
	{
		printf("memory not allocated\n");
	}

	printf("enter the values stored in n\n");

	for (i = 0; i < n; i++)
	{
		scanf("%d", (ptr + i));
	}
	free(ptr);

	printf("\nthe entered values are:");
	for (i = 0; i < n; i++)
	{
		printf("%d\t", *(ptr + i));
	}
	//free (ptr);
}
