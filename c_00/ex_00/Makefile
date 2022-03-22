SRCS			= megaphone.c
OBJS			= ${SRCS:.cpp=.o}
NAME            = megaphone
CC				= c++
RM              = rm -f

CFLAGS          = -Wall -Wextra -Werror -pedantic -std=c++98

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:         clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re