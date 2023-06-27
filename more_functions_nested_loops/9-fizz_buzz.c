#include <stdio.h>
/**
 * main - Write a program that prints the numbers from 1 to 100
 * Return: always 0
 **/
int main(void)
{
int a;
a = 1;
while (a <= 100)
{
if ((a % 5 == 0) && (a % 3 == 0))
{
printf("FizzBuzz");
}
else if (a % 5 == 0)
{
if (a == 100)
{
printf("Buzz");
}
else
{
printf("Buzz ");
}
}
else if (a % 3 == 0)
{
printf("Fizz ");
}
else
{
printf("%d", a);
}
a++;
}
putchar('\n');
return (0);
}
