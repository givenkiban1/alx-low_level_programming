#include "main.h"

/**
* _isalpha - check for alphabetic character.
* @c: check if it's upper or lowercase
* Return: 1 if c is lowercase or uppercase, return 0 otherwise.
*/

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
