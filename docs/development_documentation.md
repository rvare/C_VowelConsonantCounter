**Table of Contents**

- [Introduction](#introduction)
- [Functions](#functions)
- [Variables](#variables)

- - -

# Introduction

The following document gives details about *VC Counter*. This includes: functions, variables, etc.

# Functions

The following are the functions used by the program.

`void main(int argc, char *argv[])`
: Where the main execution happens. This is where it filters between characters, punctuation, and whitespace.

`check_consonant(char c)`
: Checks if `c` is a consonant. Returns non-zero (or if using `stdbool.h`, `true`) if it is a consonant. Zero otherwise.

`check_vowel(char c)`
: Checks if `c` is a vowel. Returns non-zero (or if using `stdbool.h`, `true`) if it is a vowel. Zero otherwise.

# Variables

The only variable to be concerned are in `main.c`. `check_consonant.c` and `check_vowel.c` only have a single parameter, described in section **Functions**.

`FILE *file_ptr`
: The file pointer that is given from `argv[1]`. Must be a text file. Initialized to `NULL`.

`register int token`
: Represents some token from the text file (character, punctuation, whitespace, etc.).
: Has the `register` declaration because it is one of the most frequently used variables in the program.
: Initialized to `'\0'` to prevent garbage.

`register char prev_token`
: Holds what was previous read. Used to help with the count of pairs.
: Assume to always have a character.
: Has the `register` declaration because it is one of the most frequently used variables in the program.
: Initialized to `'\0'` to prevent garbage.

`unsigned int vow_count`
: Keeps track the number of vowels encountered.
: Declared with `unsigned` because negative values are never used.
: Initialized to `0`.

`con_count`
: Keeps track the number of consonants encountered.
: Declared with `unsigned` because negative values are never used.
: Initialized to `0`.

`unsigned int vv, vc, cv, cc`
: These variables keep track the number of pairs encountered.
: `vv` for vowel-vowel pair, `vc` for vowel-consonant pair, `cv` for consonant-vowel pair, and `cc` for consonant-consonant pair.
: Declared with `unsigned` because negative values are never used.
: All are initialized to `0`.
