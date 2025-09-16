#include <ctype.h>
#include <stdbool.h>

/*
Purpose: checks if the character c is a consonant.
Precondition: c is a char.
Postcondition: Return true (1) if consonant otherwise false (0).
Invariant: None.
*/

bool check_consonant(char c) {
	c = tolower(c);
	if (c >= 'b' && c <= 'd')
		return true;
	else if (c >= 'f' && c <= 'h')
		return true;
	else if (c >= 'j' && c <= 'n')
		return true;
	else if (c >= 'p' && c <= 't')
		return true;
	else if (c >= 'v' && c <= 'z')
		return true;
	else
		return false;
}
