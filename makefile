NAME	= gnl.a
SRC		= get_next_line_utils.c get_next_line.c
OBJ		= $(SRC:.c=.o)

BNAME	= gnl_b.a
BSRC	= get_next_line_utils_bonus.c get_next_line_bonus.c
OBJB	= $(BSRC:.c=.o)

CFLAGS	= -Wall -Wextra -Werror -I. -D BUFFER_SIZE=1

all:	 $(NAME)

$(NAME): $(OBJ)
	@ar -rcs $(NAME) $(OBJ)

bonus:	 $(BNAME)

$(BNAME): $(OBJB)
	@ar -rcs $(BNAME) $(OBJB)

clean:
	@rm -rf $(OBJ) $(OBJB)

fclean:	clean
	@rm -f $(NAME) $(BNAME)

re:	fclean all

.PHONY:	all clean fclean re bonus
