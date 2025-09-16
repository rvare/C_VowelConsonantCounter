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
