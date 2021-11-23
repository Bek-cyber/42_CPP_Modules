NAME	=	Abstract_class

SRCS	=	$(wildcard *.cpp)

CXXFLAGS	=	-std=c++98 -Wall -Wextra -Werror -Wshadow -Wno-shadow

CXX		=	clang++

OBJS	=	$(SRCS:.cpp=.o)

%.o:	%.cpp
	$(CXX)	$(CXXFLAGS) -o $@ -c $<

all:	$(NAME)
	rm -f $(OBJS)

$(NAME):	$(OBJS)
	$(CXX) $(OBJS) -o $@

fclean:
	rm -f $(NAME)

re: fclean all