#include <stdio.h>

/**
* main - Prints base 16 in lower case
* Return: 0
*/

int main(void)
{
char base_1;
char base_2;

for (base_1 = '0' ; base_1 <= '9' ; base_1++)
{
putchar(base_1);
}
for (base_2 = 'a' ; base_2 <= 'f' ; base_2++)
{
putchar(base_2);
}
putchar(10);
return (0);
}
