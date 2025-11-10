NAME    = libft.a

CC      = gcc
CFLAGS  = -Wall -Wextra -Werror
AR      = ar
ARFLAGS = rcs
RM      = rm -f


SRCS        := $(wildcard *.c)
OBJS        := $(SRCS:.c=.o)

INCS    = libft.h

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $@ $^


%.o: %.c $(INCS)
	$(CC) $(CFLAGS) -I . -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
