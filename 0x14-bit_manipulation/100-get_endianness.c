/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int value = 1;
	unsigned char *byte = (unsigned char *)&value;

	return ((int)*byte);
}
