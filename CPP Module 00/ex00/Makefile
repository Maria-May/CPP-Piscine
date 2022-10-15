NAME	=	megaphone

CC		=	c++

CXXFLAGS	=	-Wall -Wextra -Werror  -std=c++98

SRC		=	megaphone.cpp

OBJS		=	$(patsubst %.cpp, %.o, $(SRC))

all		:	$(NAME)

$(NAME)	:	$(OBJS)
				$(CC) $(CXXFLAGS) $(OBJS) -o $@

%.o		:	%.cpp
				$(CC) $(CXXFLAGS) -c $< -o $@

clean	:
				rm -rf $(OBJS)

fclean	:	clean
				rm -rf $(NAME)

re		:	fclean	all

.PHONY	:	all clean fclean re