NAME = AbstractClass
CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp Brain.cpp Cat.cpp Dog.cpp AAnimal.cpp
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

.PHONY: re all clean fclean
