#include "main.h"

/**
* _isalpha - returns 1 if char is upper or lower case
*Returns 1 if char is upper or lower case otherwise returns 0
*/
int _isalpha(int c)
{
	if ((c <= 90) && (c >= 65))
		return (1);
	else if ((c >= 97 && (c <= 122))
		return (1);
	else
		return (0);
}
