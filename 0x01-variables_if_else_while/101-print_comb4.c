#include <stdio.h>

/**
* main - Print the numbers from 0 to 999.
* Return: 0
*/

int main(void)
{
int val1, val2, val3;
for (val1 = '0' ; val1 <= '9' ; val1++)
{
val2 = val1 + 1;
for (; val2 <= '9' ; val2++)
{
val3 = val2 + 1;
for (; val3 <= '9'; val3++)
{
putchar(val1);
putchar(val2);
putchar(val3);
if (val1 == '7' && val2 == '8' && val3 == '9')
{
break;
}
putchar(',');
putchar(' ');
}
}
}
putchar(10);
return (0);
}
