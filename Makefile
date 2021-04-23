NAME	= libft.a
CFLAGS	= -Wall -Wextra -Werror
SRCS	= *.c libft.h
OBJC	= $(SRCS:.c=.o)

%.o:	%.c
	gcc $(CFLAGS) -c $< -o $@

all:	$(NAME)

$(NAME):	$(OBJC)
	gcc $(CFLAGS) $(OBJC) -o $(NAME)

clean:
	rm -rf $(OBJC)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all
