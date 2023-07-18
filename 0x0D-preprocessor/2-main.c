#include <stdio.h>
/**
 * main - function to print the name of the file a program was compiled from
 *
 * Return: 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
