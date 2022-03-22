SRCS			= main.cpp Zombie.cpp
OBJS			= ${SRCS:.cpp=.o}
NAME            = undead
CC				= c++
RM              = rm -f

CFLAGS          = -Wall -Wextra -Werror -std=c++98 -pedantic

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o} ${HEADS}

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:         clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re