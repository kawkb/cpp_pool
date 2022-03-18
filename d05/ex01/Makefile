SRC = main.cpp Bureaucrat.cpp Form.cpp
NAME = Form
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
all : $(NAME)
$(NAME) : $(SRC)
	$(CC) -o $(NAME) $(FLAGS) $(SRC)
clean :
fclean : clean
	rm -rf $(NAME)
re : fclean all