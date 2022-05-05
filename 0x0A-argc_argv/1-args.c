#include "main.h"
#include <stdio.h>
/**
  * main - main entry point
  * @argc: number of arguments
  * @argv: array of arguments
  * Return: always success
  */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}