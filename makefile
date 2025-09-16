SRCDIR=./src
OBJDIR=./build
EXE=vc_count

CFLAGS=-c -Wall
CDEBUG=-g -Wall

default: main.o check_consonant.o check_vowel.o
	gcc $(OBJDIR)/main.o $(OBJDIR)/check_consonant.o $(OBJDIR)/check_vowel.o -o $(OBJDIR)/$(EXE)

main.o: $(SRCDIR)/main.c
	gcc $(CFLAGS) $(SRCDIR)/main.c -o $(OBJDIR)/main.o

check_consonant.o: $(SRCDIR)/check_consonant.c
	gcc $(CFLAGS) $(SRCDIR)/check_consonant.c -o $(OBJDIR)/check_consonant.o

check_vowel.o: $(SRCDIR)/check_vowel.c
	gcc $(CFLAGS) $(SRCDIR)/check_vowel.c -o $(OBJDIR)/check_vowel.o

clean:
	rm ./build/*.o $(EXE)

run:
	./$(EXE)
