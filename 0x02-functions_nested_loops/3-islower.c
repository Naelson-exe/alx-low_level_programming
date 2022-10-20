#include "main.h"

/**
* _islower - returns 1 if char is lower case returns 0 otherwise
* Returns 1 if lowercase, otherwise it returns 0
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
