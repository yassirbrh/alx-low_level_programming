/**
 * _islower - function
 *
 * Description: function that checks for lowercase character.
 *
 * @c: stores the ascii code of the character
 *
 * Return: 1 (Lowercase found)
 *         0 (Lowercase not found)
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
