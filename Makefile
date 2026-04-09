CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c11 -Iinclude
SRC = $(wildcard src/*.c)
TESTS = $(wildcard tests/*_test.c)

all: test

format:
	clang-format -i src/*.c include/*.h tests/*.c

check-format:
	clang-format --dry-run --Werror src/*.c include/*.h tests/*.c

test: $(TESTS)
	for test in $(TESTS); do \
		$(CC) $(CFLAGS) $$test $(SRC) -o test.out -lm; \
		./test.out; \
	done

clean:
	rm -f *.out *.0

