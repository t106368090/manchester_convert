CC = gcc
CFLAGS = -Wall -g -c

ROOT_DIR := $(shell pwd)

SRC := $(wildcard *.c)
OBJ := ${patsubst %.c, %, $(SRC)}


.PHONY:all clean

all:$(OBJ)

%:%.c
	@$(CC) -o $@ $^

clean:
	@rm -f $(OBJ)

