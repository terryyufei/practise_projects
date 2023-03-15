#include <stdio.h>

int main()
{
	int year = 1968;
	int *pointer_to_year = &year;
	printf("what does p print :%p\n", pointer_to_year);
	printf("what does operator print:%d\n", *pointer_to_year);
	printf("what does umpersand print:%p\n", &year);

	return (0);
}	
