NAME = megaphone
CPP = g++
FLAGS = -Wall -Wextra -Werror
SRCS = megaphone.cpp
OBJS = ${SRCS:.cpp=.o}
RM = rm -rf

%.o: %.cpp
	${CPP} ${FLAGS} -c $< -o ${<:.cpp=.o}

all:${NAME}

${NAME}: ${OBJS}
	${CPP} ${FLAGS} ${OBJS} -o ${NAME}

clean:
	@${RM} ${OBJS} 

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: re all clean fclean