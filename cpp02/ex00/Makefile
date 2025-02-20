NAME = firstCanon
CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = srcs/Fixed.cpp srcs/main.cpp
OBJS = ${SRCS:.cpp=.o}
RM = rm -rf

%.o: %.cpp
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
