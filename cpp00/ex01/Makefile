NAME = phonebooks
CPP = g++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = srcs/main.cpp srcs/Contact.cpp srcs/PhoneBook.cpp
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

.PHONY: re all clean fclean
