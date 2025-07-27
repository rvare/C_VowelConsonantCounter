SRCDIR=./src
OBJDIR=./build/objects
TESTSDIR=./tests
TESTSOBJDIR=./build/tests

CFLAGS=-c -Wall
CDEBUG=-g -Wall

clean:
	rm ./build/*.o

run:
	./a.exe
