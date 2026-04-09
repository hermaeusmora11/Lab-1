CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c11

SRC = src/main.c
OUT = app

all:
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

clean:
	rm -f $(OUT)

