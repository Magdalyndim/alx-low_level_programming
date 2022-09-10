#include <stdio.h>
/**
 * main - Entry point
 * Description: prints base 16 numbers
 * Return: Always 0 (success)
 */
int main(void)
{

int i;

for (i = 48; i < 58; i++)

{
	putchar(i);
}

for (i = 97; i < 103; i++)

{
	putchar(i);
}

putchar('\n');
return (0);

}
