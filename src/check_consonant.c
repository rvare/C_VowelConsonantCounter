/*
VC Counter a program that counts vowels and consonants, including pairs.
Copyright (C) 2025  Richard Ernest Varela <richardvare13@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

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
