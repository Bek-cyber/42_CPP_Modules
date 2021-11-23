NAME	=	maggots

SRCS	=	$(wildcard *.cpp)

OBJS	=	$(SRCS:.cpp=.o)

CXX		=	clang++

CXXFLAGS	=	-std=c++98 -Wall -Wextra -Werror

%.o:	%.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

all:	$(NAME)
	rm -rf $(OBJS)

$(NAME):	$(OBJS)
	$(CXX) $(OBJS) -o $@

# clean:
# 	rm -f $(OBJS)

fclean:
	rm -f $(NAME)

re:	fclean all