#include "main.h"
#include <string.h>
/**
 * main - Entry point
 * @argc: count of arguments
 * @argv: pointer to character
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)*argv;
	_putchar((argc - 1) + '0');
	_putchar('\n');
	return (0);
}
