#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <stddef.h>
#include <string.h>
#include <uchar.h>
#include <stdbool.h>

#include "./functions.h"

int main(int argc, char *argv[]) {
	FILE *file_ptr = NULL;
	register int token = '\0';
	register char prev_token = '\0';
	unsigned int vow_count = 0, con_count = 0,
				 vv = 0, vc = 0,
				 cv = 0, cc = 0;
	
	if (1 == argc) {
		fprintf(stderr, "ERROR with command arguments: No file given\n");
		return 1;
	}

	file_ptr = fopen(argv[1], "r");
	if (NULL == file_ptr) {
		perror("Error opening file");
		return 1;
	}

	while (EOF != (token=fgetc(file_ptr))) {
		if (check_vowel(token))
			++vow_count;
		else if (check_consonant(token))
			++con_count;
		else // Neither case
			continue;

		if (check_vowel(prev_token) && check_vowel(token))
			++vv;
		else if (check_vowel(prev_token) && check_consonant(token))
			++vc;
		else if (check_consonant(prev_token) && check_vowel(token))
			++cv;
		else if (check_consonant(prev_token) && check_consonant(token))
			++cc;

		prev_token = token;
	}

	if (ferror(file_ptr)) {
		perror("ERROR with file");
		return 1;
	}

	fclose(file_ptr);

	printf("\nTotal characters: %d\n#vowels: %d\t#consonants: %d\n", vow_count+con_count, vow_count, con_count);
	printf("vv: %d\tvc: %d\tcv: %d\tcc: %d\n", vv, vc, cv, cc);

	return 0;
}

