#include <stdio.h>

/**
* main - printing letters in lowercase from 'z' to 'a'.
* Return: 0
*/

int main(void)
{
char alpha;

for (alpha = 'z' ; alpha >= 'a' ; alpha--)
{
putchar(alpha);
}
putchar(10);
return (0);
}
