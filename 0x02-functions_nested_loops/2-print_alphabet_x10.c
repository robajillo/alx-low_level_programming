#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - main block
 * Description:
 */

void print_alphabet_x10(void)
{
char c;
int i = 0;
while (i < 10)
{
c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
i++;
putchar('\n');
}
}
