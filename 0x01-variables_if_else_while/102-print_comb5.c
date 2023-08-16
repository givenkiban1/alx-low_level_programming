#include <stdio.h>

/**
* main -  Print all possible combinations of numbers from 0 - 9999.
* Return: 0
*/

int main(void)
{
int val1, val2, val3, val4;
for (val1 = '0'; val1 <= '9'; val1++)
{
for (val2 = '0'; val2 <= '9'; val2++)
{
for (val3 = val1; val3 <= '9'; val3++)
{
if (val3 == val1)
{
val4 = val2 + 1;
}
else
{
val4 = '0';
}
for (val4 = val4; val4 <= '9'; val4++)
{
putchar(val1);
putchar(val2);
putchar(' ');
putchar(val3);
putchar(val4);
if (!(val1 == '9' && val2 == '8' && val3 == '9' && val4 == '9'))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar(10);
return (0);
}
