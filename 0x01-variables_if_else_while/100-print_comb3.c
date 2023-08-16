#include <stdio.h>

/**
* main - Print the numbers from 0 to 99.
* Return: 0
*/

int main(void)
{
int val1, val2;
for (val1 = 48 ; val1 < 58 ; val1++)
{
val2 = 49 + (val1 - 48);
for (; val2 < 58 ; val2++)
{
putchar(val1);
putchar(val2);
if (val1 == 56 && val2 == 57)
{
continue;
}
putchar(',');
putchar(' ');
}
}
putchar(10);
return (0);
}
