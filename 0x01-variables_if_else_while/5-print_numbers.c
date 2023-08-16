#include <stdio.h>

/**
* main - Prints single digit base 10 numbers starting from 0
* Return: 0
*/

int main(void)
{
int no_base;

for (no_base = 0 ; no_base  <= 9 ; no_base++)
{
putchar(no_base + '0');
}
putchar(10);
return (0);
}
