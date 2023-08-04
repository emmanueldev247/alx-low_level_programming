/**
 * get_endianness - function to check the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num;
	char *ptr;

	num = 1;
	ptr = (char *)&num;

	if (*ptr == 1)
	{
		return (1);
	}
	else
		return (0);
}

