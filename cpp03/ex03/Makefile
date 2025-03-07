NAME = Now_its_weird!
CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS =  main.cpp ClapTrap/srcs/ClapTrap.cpp FragTrap/srcs/FragTrap.cpp\
		srcs/DiamondTrap.cpp ScavTrap/srcs/ScavTrap.cpp
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
