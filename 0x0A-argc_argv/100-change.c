#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int val, count, j;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	j = 0;
	while (argv[1][j] != '\0')
	{
		if (!isdigit(argv[1][j]))
		{
			printf("Error\n");
			return (1);
		}
		j++;
	}

	val = atoi(argv[1]);

	if (val < 0)
	{
		printf("Error\n");
		return (1);
	}

	count = count_helper(val);

	printf("%d\n", count);
	return (0);
}

/**
 * count_helper - function to count change
 * @val: amount that requires change
 * Return: the amount of change
 */
int count_helper(int val)
{
	int count;

	count = 0;
	while (val != 0)
	{
		if (val >= 25)
		{
			val -= 25;
			count++;
		}
		else if (val >= 10)
		{
			val -= 10;
			count++;
		}
		else if (val >= 5)
		{
			val -= 5;
			count++;
		}
		else if (val >= 2)
		{
			val -= 2;
			count++;
		}
		else
		{
			val -= 1;
			count++;
		}
	}

	return (count);
}
