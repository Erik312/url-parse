CC=g++
CXXFLAGS=-std=c++17 -Wall -Werror -Wextra

all: url_parser.o liburlparser.a


url_parser.o: src/urlparser.cpp include/urlparser.h
	${CC} ${CXXFLAGS} -c src/urlparser.cpp

liburlparser.a: urlparser.o
	ar rcs liburlparser.a urlparser.o


clean:
	rm -f *.o *.a