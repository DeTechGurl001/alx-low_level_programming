#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that prints the alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char current_char = 'a';

	for (int i = 0; i < 26; i++)
	{
		putchar(current_char);
		current_char++;
	}
	putchar('\n');
	return (0);
}
