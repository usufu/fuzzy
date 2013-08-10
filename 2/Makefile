CC = gcc
OUT=out/
SRC=$(wildcard *.c, src/*.c)
DIR=$(notdir $(SRC))
BIN=$(patsubst %.c,$(OUT)%,$(DIR))

MAKE_OBJECT_DIR := $(shell mkdir -p $(OUT))


all:$(BIN)

$(OUT)%:src/%.c
	$(CC) -o $@ $^

.PHONY: clean
clean:
	rm -fr $(OUT)
