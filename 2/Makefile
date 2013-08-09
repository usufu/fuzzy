CC = gcc
OUT=out/
SRC=$(wildcard *.c)
BIN=$(patsubst %.c,$(OUT)%,$(SRC))

MAKE_OBJECT_DIR := $(shell mkdir -p $(OUT))


all:$(BIN)

$(OUT)%:%.c
	$(CC) -o $@ $^

.PHONY: clean
clean:
	rm -fr $(OUT)
