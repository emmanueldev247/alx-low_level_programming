#include "main.h"
/**
  * _pow_recursion - function that returns the value of x ^ y
  * @x: value to raised
  * @y: the power
  * Return: the result after raising
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}
