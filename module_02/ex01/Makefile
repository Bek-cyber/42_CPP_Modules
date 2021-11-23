NAME	=	orthodox_2

SRCS	=	main.cpp Fixed.cpp \

CXX		=	clang++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

OBJS	=	$(SRCS:.cpp=.o)

%.o:	%.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

all:	$(NAME)
	rm -rf $(OBJS)

$(NAME):	$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o$(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all