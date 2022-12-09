#include <stdlib.h>
#include <stdio.h>
/**
*main-entry point
*Return:  lowercase alphabet in reverse
*/
int main(void)
{
int i;
for (i = 'z'; i >= 'a' ; i--)
{
putchar(i);
}
putchar('\n');
return (0);
}
