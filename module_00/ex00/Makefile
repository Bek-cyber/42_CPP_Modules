NAME	=	megaphone

SRC		=	megaphone.cpp \

CC		=	clang++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

OBJ		=	$(SRC:.cpp=.o)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all