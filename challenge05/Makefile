CC=gcc
CFLAGS=-Wall -Wextra -Werror
TARGET=starter
TEST_TARGET=test_challenge05

all: $(TARGET)

$(TARGET): starter.c
	$(CC) $(CFLAGS) -o $(TARGET) starter.c

test:
	sh run_tests.sh

clean:
	rm -f $(TARGET) $(TEST_TARGET)
