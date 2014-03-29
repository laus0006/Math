CC=gcc
CFLAGS=-std=c11 -g
LIBS=-lm

test: test.c math_functions.o
	${CC} ${CFLAGS} $^ -o $@ ${LIBS}

math_functions.o: math_functions.c math_functions.h
	${CC} ${CFLAGS} -c math_functions.c -o $@ ${LIBS}
