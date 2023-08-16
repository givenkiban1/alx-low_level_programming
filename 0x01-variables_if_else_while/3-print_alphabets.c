#include <stdio.h>

/**
 * main - Printing the alphabets in both upper and lower case.
 * Return: 0
*/

int main(void)
{
	char lower;
	char upper;

	for (lower = 'a' ; lower <= 'z' ; lower++)
	{
		putchar(lower);
	}

	for (upper = 'A' ; upper <= 'Z' ; upper++)
	{
		putchar(upper);
	}

	putchar(10);
	return (0);
}
