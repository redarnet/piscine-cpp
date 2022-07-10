NAME = point

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJ_DIR = obj

SRC_DIR = .

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:%.cpp=%.o))

SRC =	main.cpp\
		Fixed.cpp \
		Point.cpp

all:  $(NAME)

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	c++ $(FLAGS) -c $< -o $@


$(NAME): $(OBJ)
	c++  $(OBJ)  $(FLAGS) -o $@


clean:
	rm -rf $(OBJ_DIR)
	rm -rf $(OBJ)

fclean:
	rm -rf $(OBJ_DIR)
	rm -rf $(OBJ)
	rm -rf $(NAME)

re: fclean all
