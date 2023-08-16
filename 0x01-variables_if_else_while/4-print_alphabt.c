#include <stdio.h>

/**
* main - Prints lowercase alphabet letters if they aren't q or e.
* Return: 0
*/

int main(void)
{
char letter;

for (letter = 'a' ; letter <= 'z' ; letter++)
{
if (letter != 'q' && letter != 'e')
{
putchar(letter);
}
}
putchar(10);
return (0);
}
