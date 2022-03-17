SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp
NAME = Abstract
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
all : $(NAME)
$(NAME) : $(SRC)
	$(CC) -o $(NAME) $(FLAGS) $(SRC)
clean :
fclean : clean
	rm -rf $(NAME)
re : fclean all