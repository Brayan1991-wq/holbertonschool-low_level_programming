#include "main.h"
/**
 * factorial - function that returns the factorial of a given number.
 * @n: number to find the factorialx
 * Return: the factorial number
 **/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
