#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i, *ptr;

	printf("enter the value at n:\n");
	scanf("%d", &n);

	ptr = (int *)malloc(n * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	printf("enter the values:\n");

	for (i =0; i < n; i++)
	{
		scanf("%d", (ptr + i));
	}
	printf("the entered values are :\n");

	for (i = 0; i < n; i++)
	{
		printf("%d\t", *(ptr + i));
	}
	free(ptr);
}
