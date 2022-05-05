#include <stdio.h>
#include "main.h"
/**
 * main - main entry point
 * @argc: no of parameters
 * @argv: array of parameters
 * Return: always sucess
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
