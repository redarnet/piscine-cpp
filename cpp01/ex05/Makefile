NAME = sed

CC = c++
SRC_DIR = .
OBJ_DIR = obj

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:%.cpp=%.o))

SRC =	main.cpp\
		Harl.cpp

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	c++ $(FLAGS) -c $< -o $@


$(NAME): $(OBJ)
	c++  $(OBJ)  $(FLAGS) -o $@


clean:
	rm -rf $(OBJ)
	rm -rf $(OBJ_DIR)

fclean:
	rm -rf $(OBJ_DIR)
	rm -rf $(OBJ)
	rm -rf $(NAME)

re: fclean all
