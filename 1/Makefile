CC = gcc
SRC=$(wildcard *.c)
OUT=$(patsubst %.c,%,$(SRC))

all:$(OUT)

%:%.c
	$(CC) -o $@ $^


.PHONY: clean
clean:
	rm -f $(OUT)
