NAME = Interface&recap
CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS =
OBJS = ${SRCS:.cpp=.o}
RM = rm -rf

all: ${NAME}

.cpp.o:
	${CPP} ${FLAGS} -c $< -o ${<:.cpp=.o}

${NAME}: ${OBJS}
	${CPP} ${FLAGS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

test: all clean ./${NAME}

.PHONY: re all fclean clean
