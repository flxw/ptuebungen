SHELL=/bin/sh

CC=/usr/bin/gcc
CFLAGS=-Wall

STACK_HDR=i2stack.h
STACK_SRC=$(STACK_HDR:%.h=%.c) test2stack.c
STACK_OBJ=$(STACK_SRC:%.c=%.o)

TARGETS = test2stack strsort aufgabe2 aufgabe3

all: $(TARGETS)

debug: CFLAGS+= -g
debug: all

test2stack: $(STACK_OBJ)

clean: 
	rm -f $(TARGETS)
	rm -f *.o
	rm -f *.s
	rm -rf *.dSYM
