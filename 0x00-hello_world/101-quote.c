#include <unistd.h>

/**
 * main - entry point
 *
 *Description: A C program that prints with puts function
 *
 *Return: Always 0 (success)
*/

int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quo, 59);
	return (1);
}
