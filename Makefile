CC	= gcc
CFLAGS	= -W -Wall -Werror -Wextra
NAME	= my_ls
SRC	=	main.c			 		\
		fonction/my_putchar.c			\
	    fonction/my_putstr.c            \
	    fonction/option.c               \
	    fonction/my_strcmp.c            \
	    fonction/my_ls.c


OBJ	= $(SRC:%.c=%.o)
RM	= rm -f

$(NAME)	:	$(OBJ)
			        $(CC) $(OBJ) -o $(NAME) $(CFLAGS)

all 	:   $(NAME)

clean	:
		$(RM) $(OBJ)

fclean	:   clean
		$(RM) $(NAME)

re      :   fclean all

.PHONY	:   all clean fclean re