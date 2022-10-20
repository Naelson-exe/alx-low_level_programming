#include "main.h"

/**
* _isalpha - returns 1 if char is upper or lower case
*Returns 1 if char is upper or lower case otherwise returns 0
*/
int _isalpha(int c)
{
	if ((c <= 'z') && (c >= 'a'))
	{
		return (1);
	}
	else if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
