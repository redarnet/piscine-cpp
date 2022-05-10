NAME = BraiiiiiiinnnzzzZ

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp\
		Zombie.cpp\
		newZombie.cpp\
		randomChump.cpp

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
