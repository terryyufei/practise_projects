#include <stdio.h>

int main()
{
	int i, N, banknotes, bank_count;
	scanf("%d", &N);
	
	 banknotes [10] = {100, 50, 20, 10, 5, 2, 1}
	 bank_count[sizeof(banknotes) / sizeof(int)] = {0};

	for (i = 0; i < sizeof(banknotes) / sizeof(int); i++)
		bank_count[i] = N / banknotes[i];
		N = N % banknotes[i];

		printf("%d nota(s) de R$ %d 00\n", bank_count[i], banknotes[i]);

		return (0);
}
