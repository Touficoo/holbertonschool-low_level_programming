#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	const char str[] = "_putchar\n";
	size_t len = sizeof(str) - 1;

	write(STDOUT_FILENO, str, len);
	return (0);
}
