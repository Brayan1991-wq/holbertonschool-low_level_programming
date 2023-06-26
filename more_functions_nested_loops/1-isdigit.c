#include "main.h"
/**
 * _isdigit - function that checks a digit
 * @c: digito a verificar
 * Return: 1 if it is a digit, 0 otherwise
 **/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
