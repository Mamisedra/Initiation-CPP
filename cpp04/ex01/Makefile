NAME = JeNeVeuxPasBruleLeMonde
CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Animal.cpp Cat.cpp Dog.cpp Brain.cpp main.cpp
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

.PHONY: re all fclean clean
