#include <ctype.h>

/*
Purpose: checks if the character c is a consonant.
Precondition: c is a char.
Postcondition: Return true (1) if consonant otherwise false (0).
Invariant: None
*/

int check_consonant(char c) {
	c = tolower(c);
	if (c >= 'b' && c <= 'd')
		return 1;
	else if (c >= 'f' && c <= 'h')
		return 1;
	else if (c >= 'j' && c <= 'n')
		return 1;
	else if (c >= 'p' && c <= 't')
		return 1;
	else if (c >= 'v' && c <= 'z')
		return 1;
	else
		return 0;
}
