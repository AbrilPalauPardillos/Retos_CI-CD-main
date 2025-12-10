CC=gcc
CFLAGS=-Wall -Wextra -Werror
NAME=calc
SRCS=starter.c suma.c resta.c multiplicacion.c division.c
OBJS=$(SRCS:.c=.o)
TEST=test_challenge04

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) $(TEST)

re: fclean all

test: $(SRCS) test_challenge04.c
	$(CC) $(CFLAGS) -o $(TEST) $(SRCS) test_challenge04.c
	./$(TEST)
