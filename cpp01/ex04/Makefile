NAME = sed_is_for_losers
CPP = g++
FLAGS = -Wall -Wextra -Werror
SRCS = srcs/main.cpp
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

.PHONY: re all clean fclean sed_is_for_losers