NAME	= gnl.a

SRC	= get_next_line_utils.c get_next_line.c

OBJ	= $(SRC:.c=.o)

CFLAGS	= -Wall -Wextra -Werror -I. -D BUFFER_SIZE=1

all:	 $(NAME)

$(NAME): $(OBJ)
	@ar -rcs $(NAME) $(OBJ)

clean:
	@rm -rf $(OBJ)

fclean:	clean
	@rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
