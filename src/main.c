#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <stddef.h>
#include <string.h>
#include <uchar.h>
#include <assert.h>

int check_vowel(char c);
int check_consonant(char c);

int main(int argc, char *argv[]) {
	// FILE *file = fopen("../test_files/test1.txt", "r");
	char c, prev_char = '\0';
	int is_vow = 0, is_con = 0, vow_count = 0, con_count = 0, vv = 0, vc = 0, cv = 0, cc = 0;

	while (EOF != (c=getchar())) {
		if ('\n' == c) continue;
		is_vow = check_vowel(c);
		if (check_vowel(c)) {
			printf("%c is a vowel\n", c);
			++vow_count;
		}
		else if (check_consonant(c)) {
			printf("%c is a consonant\n", c);
			++con_count;
		}
		else {
			printf("%c is neither\n", c);
		}

		if (check_vowel(prev_char) && check_vowel(c)) {
			++vv;
		}
		else if (check_vowel(prev_char) && check_consonant(c)) {
			++vc;
		}
		else if (check_consonant(prev_char) && check_vowel(c)) {
			++cv;
		}
		else if (check_consonant(prev_char) && check_consonant(c)) {
			++cc;
		}
		prev_char = c;
	}

	printf("# vowels: %d\t# consonants: %d\n", vow_count, con_count);
	printf("vv: %d\tvc: %d\tcv: %d\tcc: %d\n", vv, vc, cv, cc);

	return EXIT_SUCCESS;
}

int check_vowel(char c) {
	c = tolower(c);
	switch(c) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			return 1;
		default:
			return 0;
	}
}

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

