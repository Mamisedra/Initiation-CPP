NAME = BSP
CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = srcs/main.cpp srcs/Fixed.cpp srcs/Point.cpp srcs/bsp.cpp
OBJS = ${SRCS:.cpp=.o}
RM = rm -rf

all:${NAME}

%.o: %.cpp
	${CPP} ${CFLAGS} -c $< -o ${<:.cpp=.o}

${NAME}: ${OBJS}
	${CPP} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
	@${RM} ${OBJS}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: re all clean fclean
