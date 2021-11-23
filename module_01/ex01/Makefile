NAME	=	zombie

SRCS	=	main.cpp ZombieHorde.cpp Zombie.cpp \

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

CXX		=	clang++

OBJS	=	$(SRCS:.cpp=.o)

%.o:	%.cpp
	$(CXX) $(CXXFLAGS)	-c -o $@ $<

all:	$(NAME)
	rm -rf $(OBJS)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o$(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all