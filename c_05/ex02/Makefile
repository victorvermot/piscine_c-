SRCS			= AForm.cpp main.cpp ShrubberyCreationForm.cpp Bureaucrat.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp
OBJS			= ${SRCS:.cpp=.o}
NAME            = all_forms
CC				= c++ -g
RM              = rm -f

CFLAGS          = -Wall -Wextra -Werror -std=c++98 -pedantic -g -fsanitize=address -I . -I ./Character/ -I ./Materia/

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