#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <uchar.h>
#include <assert.h>

int check_vowel(char c);
int check_consonant(char c);

int main(int argc, char *argv[]) {
	// FILE *file = fopen("../test_files/test1.txt", "r");
	char c;
	int is_vow = 0, is_con = 0, vow_count = 0, con_count = 0;

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
	}

	printf("# vowels: %d\t# consonants: %d\n", vow_count, con_count);

	return EXIT_SUCCESS;
}

int check_vowel(char c) {
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
