#include <stdio.h>

/**
* main - Prints the all combinations of numbers < 10
* Return: 0
*/

int main(void)
{
int number;

for (number = 48 ; number < 58 ; number++)
{
putchar(number);
if (number < 57)
{
putchar(',');
putchar(' ');
}
}
putchar(10);
return (0);
}
