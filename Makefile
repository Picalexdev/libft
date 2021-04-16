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

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean ${NAME}

