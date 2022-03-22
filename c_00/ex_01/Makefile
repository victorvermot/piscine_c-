SRCS			= main.cpp Contact.class.cpp PhoneBook.class.cpp
OBJS			= ${SRCS:.cpp=.o}
NAME            = phonebook
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