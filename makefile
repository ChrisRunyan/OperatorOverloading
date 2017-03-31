#
# Assignment 5: Operator Overloading
# makefile
# Created: 03/28/2017
# Author: Christopher A Runyan
#
CC=g++
CFLAGS=-g -Wall

all: main.o ComplexNumber.o
	${CC} ${CFLAGS} -o main main.o ComplexNumber.o

main.o: main.cpp
	${CC} ${CFLAGS} -c main.cpp

ComplexNumber.o: ComplexNumber.cpp
	${CC} ${CFLAGS} -c ComplexNumber.cpp

clean:
	rm *.o
	rm main
