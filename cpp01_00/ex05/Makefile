NAME = Harl2.0
CPP = c++
FLAGS = -Wall -Wextra -Werror
SRCS = srcs/main.cpp srcs/Harl.cpp
OBJS = ${SRCS:.cpp=.o}
RM = rm -rf

all:${NAME}

.cpp.o:
	${CPP} ${FLAGS} -c $< -o ${<:.cpp=.o}

${NAME}: ${OBJS}
	${CPP} ${OBJS} -o ${NAME}

clean:
	@${RM} ${OBJS}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: re all clean fclean Harl2.0
