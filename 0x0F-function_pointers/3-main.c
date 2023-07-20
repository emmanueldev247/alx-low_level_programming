#include "3-calc.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (success) otherwise (failure)
 */
int main(int argc, char *argv[])
{
	int res;
	int num1, num2;
	int (*op_p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}


	op_p = get_op_func(argv[2]);

	if (op_p == NULL || strlen(argv[2]) != 1)
	{
		printf("Error\n");
		return (99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (num2 == 0 && (strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0))
	{
		printf("Error\n");
		return (100);
	}


	res = op_p(num1, num2);
	printf("%d\n", res);

	return (0);
}
