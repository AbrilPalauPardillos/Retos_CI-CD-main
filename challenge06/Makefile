CC=gcc
CFLAGS=-Wall -Wextra -Werror
SRC=starter.c
TARGET=programa
TEST_TARGET=test_challenge06

build: $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

test: build test_challenge06.c
	$(CC) $(CFLAGS) -o $(TEST_TARGET) $(SRC) test_challenge06.c
	./$(TEST_TARGET)

package: build
	mkdir -p dist
	cp $(TARGET) dist/

clean:
	rm -f $(TARGET) $(TEST_TARGET)
	rm -rf dist
