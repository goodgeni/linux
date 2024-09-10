#include <stdio.h>

int main()
{
	char a = 5;
	char b = 6;
	int c = 1;

	printf("%d\n", a & b);
	printf("%d\n", a | b);
	printf("%d\n", c << 8);

	printf("%d\n", c << 9);
}
