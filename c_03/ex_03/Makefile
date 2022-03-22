SRCS			= main.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp DiamondTrap.cpp
OBJS			= ${SRCS:.cpp=.o}
NAME            = diamonds
CC				= c++ -g
RM              = rm -f

CFLAGS          = -Wall -Wextra -Werror -std=c++98 -pedantic -g -fsanitize=address -Wshadow -Wno-shadow

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o} ${HEADS}

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}
			./${NAME}

clean:
			${RM} ${OBJS}

fclean:     clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re