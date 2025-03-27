CC = gcc
FLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format
FILES := $(wildcard *.c)

build: $(FILES)
	$(CC) $(FILES) $(FLAGS) -o printf

clean:
	rm -vf printf

run:
	./printf
