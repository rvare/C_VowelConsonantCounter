#include <ctype.h>
#include <stdbool.h>

/*
Purpose: Checks if the char c is a vowel.
Precondition: c is a char
Postcondition: Return true (1) if vowel, else false (0).
Invariant: None
*/

bool check_vowel(char c) {
	c = tolower(c);
	switch(c) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			return true;
		default:
			return false;
	}
}
