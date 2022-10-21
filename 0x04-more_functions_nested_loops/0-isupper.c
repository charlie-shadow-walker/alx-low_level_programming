/**
 * _isupper - checks if c is uppercase
 *
 * @c: input
 *
 * Return: 1 if its uppercase, 0 if not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
