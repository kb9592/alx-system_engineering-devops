/**
 * clear_bit - a function that sets the
 * value of a bit to 0 at a given index
 * @n: points to the number to be changed
 * @index: the index that starts from 0 of the bit to be set
 * Return: 1 if it workes, or -1 if an error occurres
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	*n = (~(1UL << index) & *n);

	return (1);
}
