#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that prints the alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase = 'a'++;+

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase;
	}
	putchar('\n');
	return (0);
}
