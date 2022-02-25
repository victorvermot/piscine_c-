SRCS			= main.cpp Karen.cpp
OBJS			= ${SRCS:.c=.o}
NAME            = karen
CC				= c++ -g
RM              = rm -f

CFLAGS          = -Wall -Wextra -Werror -std=c++98

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} ${HEADS}

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:         clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re