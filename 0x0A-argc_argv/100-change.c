#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int val, count;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	val = atoi(argv[1]);

	if (val < 0)
	{
		printf("Error\n");
		return (1);
	}

	count = 0;
	while (val != 0)
	{
		if (val >= 25)
			val -= 25;
		else if (val >= 10)
			val -= 10;
		else if (val >= 5)
			val -= 5;
		else if (val >= 2)
			val -= 2;
		else
			val -= 1;
		count++;
	}
	printf("%d\n", count);
	return (0);
}
