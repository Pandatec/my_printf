##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## makefile of the lib
##

SRC	=	src/my_putchar.c		\
		src/my_putstr.c		\
		src/my_put_nbr.c		\
		src/my_put_nbr_base.c	\
		src/my_put_nbr_long.c	\
		src/my_put_nbr_unsigned.c	\
		src/my_revstr.c		\
		src/my_strlen.c		\
		src/no_printable.c		\
		src/my_printf.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

AR	=	ar rc

RM	=	rm -f

all:	$(NAME) clean


$(NAME):	$(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:		all clean fclean re
