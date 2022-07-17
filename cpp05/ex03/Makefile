NAME = Form

CC = c++

OBJ_DIR = obj

SRC_DIR = .

FLAGS = -Wall -Wextra -Werror -std=c++98 -fPIE

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:%.cpp=%.o))

SRC =	main.cpp\
		Bureaucrat.cpp \
		Form.cpp \
		ShrubberyCreationForm.cpp \
		RobotomyRequestForm.cpp \
		PresidentialPardonForm.cpp \
		Intern.cpp

.PHONY: all
all:  $(NAME)

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	c++ $(FLAGS) -c $< -o $@


$(NAME): $(OBJ)
	c++  $(OBJ)  $(FLAGS) -o $@

.PHONY: clean
clean:
	rm -rf $(OBJ_DIR)
	rm -rf $(OBJ)

.PHONY: fclean
fclean:
	rm -rf $(OBJ_DIR)
	rm -rf $(OBJ)
	rm -rf $(NAME)

.PHONY: re
re: fclean all
