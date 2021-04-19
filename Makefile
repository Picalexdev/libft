NAME	= libft
SRC		= *.c
OBJS	= ${SRC:.c=.o}
HEADER	= libft.h
GCC		= gcc
CFLAGS	= -Wall -Wextra -Werror -g
RM		= rm -f
${NAME}:	${SRC}
			${GCC} -c ${SRC}
			ar rc $(NAME).a $(OBJS)

test:		re
			gcc $(CFLAGS) -I. main.c libft.a
			rm -f *.o

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean ${NAME}

