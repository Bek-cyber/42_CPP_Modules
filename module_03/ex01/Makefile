NAME	=	Serena

SRCS	=	$(wildcard *.cpp)

HDRC	=	$(wildcard *.hpp)

CXXFLAGS	=	-std=c++98 -Wall -Wextra -Werror -Wshadow -Wno-shadow $(addprefix -I , $(HDRC))

CXX		=	clang++

OBJS	=	$(SRCS:.cpp=.o)

%.o:	%.cpp	%.hpp
	$(CXX)	$(CXXFLAGS) -o $@ -c $<

all:	$(NAME)
	rm -f $(OBJS)

$(NAME):	$(OBJS)	$(HDRC)
	$(CXX) $(OBJS) -o $@

fclean:
	rm -f $(NAME)

re: fclean all