#include <stdio.h>
#include <stdlib.h>

int main()
{
	float x, *ptr;
	int i;

	printf("enter the value of x:\n");
	scanf("%f", &x);

	ptr = (float *)calloc(x, sizeof(float));

	printf("enter the values to be stored in x:\n");

	for (i = 0; i < x; i++)
	{
		scanf("%f", (ptr + i));
	}

	printf("the entered values are:\n");
	for (i = 0; i < x; i++)
	{
		printf("%f\t", *(ptr + i));
	}
	free(ptr);
}		

