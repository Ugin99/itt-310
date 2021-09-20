#include <stdio.h>
#include "Test.h"

int main(int argc, char** argv)
{
	// For Loop to print all the even numbers
	for (int a = 0; a <= MAX_NUMBER; ++a)
	{
		if (a % 2 == 0)
			printf("%d\n", a);
	}

	// While Loop to print all the odd numbers
	int b = 0;
	while (b <= MAX_NUMBER)
	{
		if (b % 2 != 0)
			printf("%d\n", b);
		++b;
	}

	// Do While Loop to print all the numbers divisible by 3
	int c = 0;
	do
	{
		if (c % 3 == 0)
			printf("%d\n", c);
		++c;
	} while (c <= MAX_NUMBER);

	return 0;
}
