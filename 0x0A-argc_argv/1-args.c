#include <stdio.h>
/**
  * main - main entry point
  * @argc: number of arguments
  * @argv: array of arguments
  * Return: always success
  */
int main(int argc, char *argv[] _attribute_((unused)))
{
	printf("%d", argc - 1);
	printf("\n");
	return (0);
}
