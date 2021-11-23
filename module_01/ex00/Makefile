NAME	=	zombie

SRCS	=	main.cpp newZombie.cpp randomChump.cpp Zombie.cpp \

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

CXX		=	clang++

OBJS	=	$(SRCS:.cpp=.o)

%.o:	%.cpp
	$(CXX) $(CXXFLAGS)	-c -o $@ $<

all:	$(NAME)
	rm -rf $(OBJS)

$(NAME): $(OBJS)
	$(CXX) $(FLAGCXXFLAGSS) $(OBJS) -o$(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all