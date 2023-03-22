/**
 * _isalpha - function
 *
 * Description: function that checks for alphabetic character.
 *
 * @c: stores the ascii code of the character
 *
 * Return: 1 (Lowercase found)
 *         0 (Lowercase not found)
 */
int _isalpha(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
