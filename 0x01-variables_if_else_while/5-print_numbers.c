#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main-entry point
*Return: all single digit numbers of base 10 starting from 0
*/
int main(void)
{
int i;
for (i = '0'; i <= '9' ; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
