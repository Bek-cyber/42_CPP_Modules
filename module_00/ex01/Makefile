NAME	=	phonebook

SRCS	=	main.cpp contact.cpp book.cpp \

HEADER	= main_header.hpp contact_header.hpp book_header.hpp \

CC		=	clang++

FLAGS	=	-Wall -Wextra -Werror

#DEP = ${SRCS:.cpp=.d}

OBJS	=	${SRCS:.cpp=.o}

%.o : %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)
#-include $(DEP)

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all