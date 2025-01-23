NAME = Polymorphisme
CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Cat.cpp Dog.cpp Animal.cpp main.cpp WrongAnimal.cpp WrongCat.cpp
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
