#include <stdio.h>

	
int mul(int a, int b)
{
	return a * b;
}

int divide(int a, int b)
{
	return a / b;
}

int modulus(int a, int b)
{
	return a % b;
}

int main()
{
	int (*ptr)(int, int) = &mul;
	int (*ptr2)(int, int) = &divide;
	int (*ptr3)(int,int) = &modulus;
	int result1, result2, result3;
	result1 = ptr(4,5);
	result2 = ptr2(60,10);
	result3 = ptr3(12,2);

	printf("mul: %d\n", result1);
	printf("divide: %d\n", result2);
	printf("modulus: %d\n", result3);
}	
