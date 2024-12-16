NAME = zombie
CPP = g++
FLAGS = -Wall -Wextra -Werror
SRCS = srcs/main.cpp srcs/Zombie.cpp srcs/newZombie.cpp srcs/randomChump.cpp
OBJS = ${SRCS:.cpp=.o}
RM = rm -rf

all:${NAME}

.c.o:
	${CPP} ${FLAGS} -c $< -o ${<:.cpp=.o}

${NAME}: ${OBJS}
	${CPP} ${OBJS} -o ${NAME}

clean:
	@${RM} ${OBJS}

fclean:
	@${RM} ${NAME}

re: fclean all

.PHONY: re all clean fclean zombie