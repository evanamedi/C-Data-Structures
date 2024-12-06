CC = gcc
CFLAGS = -Wall -Wextra -Wpedantic -Werror -g -O2

TARGET = stack_program

SRCS = main.c stack.c

OBJS = $(SRCS:.c=.o)

HEADERS = stack.h

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean
