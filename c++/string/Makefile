CC = g++
CFLAGS = -g -Wall

string_test:	string.o string_test.o
			$(CC) $(CFLAGS) -o string_test string.o string_test.o

string.o:	string.cc
			$(CC) $(CFLAGS) -c string.cc

string_test.o:	string_test.cc
			$(CC) $(CFLAGS) -c string_test.cc 

clean:
		rm -f string_test *.o
