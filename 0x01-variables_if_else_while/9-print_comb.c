#include <stdio.h>
/**
*main-entry point
*Return: all possible combinations of single-digit numbers.
*/
int main(void)
{
int i;
for (i = '0'; i <= '9' ; i++)
{
putchar(i);
if (i != '9')
{
putchar(',');
putchar('\t');
}
}
putchar('\n');
return (0);
}
