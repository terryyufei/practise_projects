#include <stdio.h>

int main()
{
	int x = 60;
	int y = 90;
	int distance, relative_speed, TIME;

	scanf("%d", &distance);

	relative_speed = y - x;
	TIME = (distance * 60) / relative_speed;

	printf("%d minutes\n", TIME);

	return (0);
}
