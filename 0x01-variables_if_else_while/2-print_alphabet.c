#include <stdio.h>
/*
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main()
{
	char current_char = 'a';

	for (int i = 0; i < 26; i++)
	{
		putchar(current_char);
		current_char++;
	}
	putchar('/n');
	return (0);
}
