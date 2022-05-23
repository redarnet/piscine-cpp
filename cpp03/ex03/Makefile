NAME = FragTrap

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp\
		ClapTrap.cpp\
		ScavTrap.cpp\
		FragTrap.cpp\
		DiamondTrap.cpp

OBJS = $(SRC:.cpp=.o)



%.o:	%.c
		$(CC) $(FLAGS) -c $< -o $@

all:  $(NAME)

$(NAME): $(OBJS)
	 $(CC)  $(FLAGS) -o $@ $^


clean:
	rm -rf $(OBJS)
fclean:
	rm -rf $(OBJS)
	rm -rf $(NAME)
re: fclean all
