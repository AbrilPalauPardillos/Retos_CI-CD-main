CC=gcc
CFLAGS=-Wall -Wextra -Werror
TARGET=app

all: $(TARGET)

$(TARGET): starter.c
	$(CC) $(CFLAGS) -o $(TARGET) starter.c

clean:
	rm -f $(TARGET)
