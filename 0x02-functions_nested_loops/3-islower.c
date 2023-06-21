#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @c: - the character to be checked
 * Return: 1 for lowercase charcater or 0 for anythign else
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
