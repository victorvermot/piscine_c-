SRCS			= ${addprefix ./Character/, Character.cpp} ${addprefix ./Materia/, Cure.cpp Ice.cpp  AMateria.cpp} main.cpp
# SRCS			= Character.cpp Cure.cpp Ice.cpp  AMateria.cpp
OBJS			= ${SRCS:.c=.o}
NAME            = diamonds
CC				= c++ -g
RM              = rm -f

CFLAGS          = -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address -I . -I ./Character/ -I ./Materia/

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} ${HEADS}

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