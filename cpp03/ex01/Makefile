NAME = Serena,my_love!
CPP = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = ClapTrap/srcs/ClapTrap.cpp srcs/ScavTrap.cpp main.cpp
OBJS = ${SRCS:.cpp=.o}
RM = rm -rf

%.o:%.cpp
	${CPP} ${CFLAGS} -c $< -o ${<:.cpp=.o}

all:${NAME}

${NAME}: ${OBJS}
	${CPP} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
	@${RM} ${OBJS}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: re all clean fclean
