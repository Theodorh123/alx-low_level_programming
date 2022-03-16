#include "main.h"

/**
  * _isalpha - Checks for alphabetic character
  * @x: The character to be checked
  *
  * Return: 1 for alphabetic character or 0 for anything else
  */
int _isalpha(int x)
{
	if ((x >= 65 && x <= 90) || (x >= 97 && x <= 122))
	{
		return (1);
	}

	return (0);
}
