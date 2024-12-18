NAME = zombieHorde
CPP = g++
FLAGS = -Wall -Wextra -Werror
SRCS = srcs/main.cpp srcs/Zombie.cpp srcs/zombieHorde.cpp
OBJS = ${SRCS:.cpp=.o}
RM = rm -rf

all:${NAME}

.c.o:
	${CPP} ${FLAGS} -c $< -o ${<:.cpp=.o}

${NAME}: ${OBJS}
	${CPP} ${OBJS} -o ${NAME}

clean:
	@${RM} ${OBJS}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: re all clean fclean zombieHorde