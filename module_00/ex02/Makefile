NAME	=	account

SRCS	=	Account.cpp tests.cpp\

OBJS	=	$(SRCS:.cpp=.o)

FLAGS	=	-Wall -Wextra -Werror -std=c++98

CC		=	clang++

%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all