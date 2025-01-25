NAME = InterfaceANDrecap
CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -g
SRCS = AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp main.cpp
OBJS = ${SRCS:.cpp=.o}
RM = rm -rf

all: ${NAME}

.cpp.o:
	${CPP} ${FLAGS} -c $< -o ${<:.cpp=.o}

${NAME}: ${OBJS}
	${CPP} ${FLAGS} ${OBJS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

test: all clean ./${NAME}

.PHONY: re all fclean clean
