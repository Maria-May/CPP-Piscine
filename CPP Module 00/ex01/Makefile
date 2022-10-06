NAME	=	phonebook

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror  -std=c++98

HEADERS =	Contact.hpp \
			PhoneBook.hpp \

SRC		=	main.cpp \
			Contact.class.cpp \
			PhoneBook.class.cpp \

OBJS		=	$(patsubst %.cpp, %.o, $(SRC))

all		:	$(NAME)

$(NAME)	:	$(OBJS)
				$(CC) $(CFLAGS) $(OBJS) -o $@

%.o		:	%.cpp $(HEADERS)
				$(CC) $(CFLAGS) -c $< -o $@

clean	:
				rm -rf $(OBJS)

fclean	:	clean
				rm -rf $(NAME)

re		:	fclean	all

.PHONY	:	all clean fclean re